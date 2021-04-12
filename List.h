#ifndef LIST_H
#define LIST_H

#include <stdbool.h>
#include "Node.h"

struct List {
  struct Node * head;
  struct Node * tail;
};

struct List * newList();
struct List * add(struct List * list, int v);
struct List * removeItem(struct List * list, int v);
char * toString(struct List * list);
bool isEmpty(struct List * list);
int size(struct List * list);
char * int2string(int x);

#endif
