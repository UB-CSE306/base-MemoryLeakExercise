#include <stdio.h>
#include <string.h>
#include "List.h"
#include "Node.h"

int main(int argc, char * argv[]) {
   struct List * listOne = newList();
   add(listOne,12345);
   add(listOne,-12);
   add(listOne,-999);
   struct List * listTwo = newList();
   add(listTwo,12345);
   add(listTwo,-12);
   add(listTwo,-999);
   struct Node * nodeA = newNode(0,NULL);
   setValue(nodeA, 10); 
   struct Node * nodeB = newNode(10,NULL);
   setNext(nodeB, nodeB); 
   return 0;
}

