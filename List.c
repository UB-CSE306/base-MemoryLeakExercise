#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "List.h"
#include "Node.h"

struct List * newList() {
  struct List * this;
  this = malloc(sizeof(*this));
  this->head = NULL;
  this->tail = NULL;
  return this;
}

struct List * add(struct List * list, int v) {
  list->tail = newNode(v,NULL);
  if (list->head == NULL) {
    list->head = list->tail;
  }
  return list;
}

struct List * removeItem(struct List * list, int v) {
  return NULL;
}

char * int2string(int x) {
  int width = (int) (log10(abs(x)) + 1.0);
  char * answer;
  answer = malloc(width*sizeof(char)+1);
  answer[0]='\0';
  sprintf(answer,"%d",x);
  return answer;
}

char * toString(struct List * list){
  return NULL;
}

bool isEmpty(struct List * list) {
  return list->head == NULL && list->tail == NULL;
}

int size(struct List * list) {
  int answer = 0;
  struct Node * ptr;
  for (ptr = list->head; ptr != NULL; ptr = ptr->next) {
    answer++;
  }
  return answer;  
}
