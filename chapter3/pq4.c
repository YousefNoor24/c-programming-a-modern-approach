#include <stdio.h>

int main(void) {
  int teleNum1, teleNum2, teleNum3;
  
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &teleNum1, &teleNum2, &teleNum3);

  printf("You entered %03d.%03d.%04d\n", teleNum1, teleNum2, teleNum3);

  return 0;
}
