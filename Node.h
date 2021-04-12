#ifndef NODE_H
#define NODE_H

struct Node {
  int value;
  struct Node * next;
};

struct Node * newNode(int v, struct Node * n);
int getValue(struct Node * node);
struct Node * getNext(struct Node * node);
void setValue(struct Node * node, int v);
void setNext(struct Node * node, struct Node * n);

#endif
