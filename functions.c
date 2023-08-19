#include <stdio.h>

int doSomething(int value1, int value2) {
  printf("%d %d\n", value1, value2);
  return 1;
}


int main(void) {
   doSomething(3, 4);
   printf("Hello, World!");
}

