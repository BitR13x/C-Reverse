#include <stdio.h>

int main() {
   printf("int assigned\n\n");
   int i = 0;

   printf("while-loop\n");
   while (i < 10) {
      printf(" %d", i);
      i++;
      break;
   }



   i = 0;
   printf("\ndo-while\n");
   do {
      printf(" %d", i);
      i++;
   } while(i < 10);
}
