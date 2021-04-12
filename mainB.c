#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
   int * px;
   px = malloc(sizeof(*px));
   *px = 12;
   printf("value is %d\n",*px);
   //   free(px);
   return 0;
}

