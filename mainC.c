#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
   int * px;
   int * py;
   px = malloc(sizeof(*px));
   printf("(a) value is %d\n",*px);
   *px = 500;
   printf("(b) value is %d\n",*px);
   px++;
   *px = 600;
   printf("(c) value is %d\n",*px);
   px = malloc(sizeof(*px));
   *px = 700;
   py = px;
   printf("(d) value is %d\n",*px);
   free(px);
   *py = 800;
   printf("(e) value is %d\n",*py);
   free(py);
   return 0;
}

