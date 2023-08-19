#include <stdio.h>

int main(void) {
   int age = 37;
   int *address = &age;
   printf("%d", *address);
   *address = 38;
   printf("%d", *address);
   printf("%p", address);
}
