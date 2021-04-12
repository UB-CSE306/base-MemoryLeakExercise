#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "List.h"
#include "Node.h"


extern char* strdup(const char*);

int * q;

int main(int argc, char * argv[]) {
   struct List * listOne = newList();
   add(listOne,12345);
   add(listOne,-12);
   add(listOne,-999);
   struct List * listTwo = newList();
   add(listTwo,12345);
   add(listTwo,-12);
   add(listTwo,-999);
   listOne = NULL;
   struct Node * nodeA = newNode(0,NULL);
   setValue(nodeA, 10); 
   struct Node * nodeB = newNode(10,NULL);
   setNext(nodeB, nodeB); 
   int * p = malloc(sizeof(*p));
   *p = 12;
   q = malloc(sizeof(*q));
   *q = 12;
   static int * r;
   r = malloc(sizeof(*r));
   *r = 12;
   char * s = "some text";
   char * t = strdup(s);
   t++;
   if (*p < *q) {
     free(--t);
   }
   return 0;
}

