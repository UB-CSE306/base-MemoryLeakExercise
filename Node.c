#include <stdlib.h>
#include "Node.h"

struct Node * newNode(int v, struct Node * n) {
  struct Node * this;
  this = malloc(sizeof(*this));
  this->value = v;
  this->next = n;
  return this;
}

int getValue(struct Node * node) {
  return node->value;
}

struct Node * getNext(struct Node * node) {
  return node->next;
}

void setValue(struct Node * node, int v) {
  node->value = v;
}

void setNext(struct Node * node, struct Node * n) {
  node->next = n;
}


