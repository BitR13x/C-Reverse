#include <stdio.h>
#include <stdlib.h>


int main(void) {
   struct person {
      int age;
      char *name;
   };

   struct adult {
      int isAdult;
      int age;
   };

   printf("first person \n \n");
   struct person flavio = { 37, "Flavio" };
   printf("%d \n", sizeof(flavio));

   printf("second person here:\n \n");
   struct adult lord = { 1 ,42 };

   printf("pointer struct \n\n");
   struct person *personPtr = &flavio;

   printf("person in heap \n\n");
   struct person *personHeapPtr;
   personHeapPtr = (struct person*)malloc(sizeof(struct person));
   personHeapPtr->age = 12;

   printf("%d\n", personHeapPtr->age);

   printf("%p \n", (void *)personPtr);
   printf("%p \n", &flavio);
   printf("%s \n", flavio.name);
}
