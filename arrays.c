#include <stdio.h>

int main() {
   printf("array init");
   int prices[10] = { 1,2,3,4,5 };

   prices[3] = 5;
   prices[5] = 6;

   for (int i = 0; i <= 10; i++) {
      printf(" %d",prices[i]);
   }
}
