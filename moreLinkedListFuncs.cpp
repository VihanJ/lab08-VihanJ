#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"
#include <iostream>

void addIntToEndOfList(LinkedList *list, int value)
{
  assert(list != NULL); // if list is NULL, we can do nothing.

  Node *p; // temporary pointer

  // TODO:
  // (1) Allocate a new node.  p will point to it.
  // (2) Set p's data field to the value passed in
  // (3) Set p's next field to NULL
  p = new Node{value, NULL};

  if (list->head == NULL)
  {
    // (4) Make both head and tail of this list point to p
    list->head = p;
    list->tail = p;
  }
  else
  {
    list->tail->next = p;
    list->tail = p;

    // Add p at the end of the list.

    // (5) The current node at the tail? Make it point to p instead of NULL

    // (6) Make the tail of the list be p now.
  }
}

void addIntToStartOfList(LinkedList *list, int value)
{
  assert(list != NULL); // if list is NULL, we can do nothing.

  Node *p = new Node{value, NULL};

  if (list->head == NULL) {
    list->head = p;
    list->tail = p;
  } else {
    Node *tmpNext = list->head;
    list->head = p;
    list->head->next = tmpNext;
    
  }

  // Add code for this.
  // HINT:
  // consider all edge cases such as when list->head is or is not null AND
  // consider all edge cases such as when list->tail is or is not null.
  // Visualizing the problem with a box and pointer diagram can help.
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element
// If more than one element has largest value,
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node *pointerToMax(LinkedList *list)
{

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.
  assert(list != NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   value of pointer to max element (first one if ties.)
  
  //while not the tail (next would be NULL);
  if (list->head == list->tail) {
      std::cout << "max" << std::endl;
      return list->head; 
  } else {
    Node *p = list->head;
    int max = list->head->data;
    Node *maxPointer = list->head;
    while (p != list->tail) {
      if (max < (p->data)) {
        max = p->data;
        maxPointer = p;
      }
      p = p->next;
    }
    if (max < (p->data)) {
      maxPointer = p;
    }
    return maxPointer;
  }
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.
// You may assume list has at least one element
// If more than one element has smallest value,
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node *pointerToMin(LinkedList *list)
{

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list != NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   value of pointer to min element
  //   (first one such value that occurs if there are ties.)

  if (list->head == list->tail) {
      std::cout << "min" << std::endl;
      return list->head; 
  } else {
    Node *p = list->head;
    int min = list->head->data;
    Node *minPointer = list->head;
    while (p != list->tail) {
      if (min > (p->data)) {
        min = p->data;
        minPointer = p;
      }
      p = p->next;
    }
    if (min > (p->data)) {
      minPointer = p;
    }
    return minPointer;
  }
}


// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list)
{

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list != NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   largest value in list (which may not be unique).

  if (list->head == list->tail) {
      std::cout << "max" << std::endl;
      return list->head->data; 
  } else {
    Node *p = list->head;
    int max = list->head->data;
    while (p != list->tail) {
      if (max < (p->data)) {
        max = p->data;
      }
      p = p->next;
    }
    if (max < (p->data)) {
      max = p->data;
    }
    return max;
  }
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list)
{
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list != NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   smallest value in list (which may not be unique).

  if (list->head == list->tail) {
      std::cout << "min" << std::endl;
      return list->head->data; 
  } else {
    Node *p = list->head;
    int min = list->head->data;
    while (p != list->tail) {
      if (min > (p->data)) {
        min = p->data;
      }
      p = p->next;
    }
    if (min > (p->data)) {
      min = p->data;
    }
    return min;
  }
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList *list)
{
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list != NULL);

  // TODO: Insert code here to calculate and return
  //   sum of all values in list (0 if there are none).

  if (list->head == list->tail) {
      return list->head->data; 
  } else {
    Node *p = list->head;
    int sum = 0;
    while (p != list->tail) {
      sum += p->data; 
      p = p->next;
    }
    sum += p->data;
    return sum;
  }
}
