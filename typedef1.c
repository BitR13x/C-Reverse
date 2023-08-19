#include <stdio.h>

typedef enum {
  monday,    // 0
  tuesday,   // 1
  wednesday, // 2
  thursday,  // 3
  friday,    // 4
  saturday,  // 5
  sunday     // 6
} WEEKDAY;

int main(void) {
  WEEKDAY day = monday;

  if (day == monday) {
    printf("It's monday!");
  } else {
    printf("It's not monday");
  }
}

