#include <stdio.h>

int main(void) {
  int num, num2;
  printf("Enter a three-digit number: ");
  scanf("%d", &num);
  
  num2 = num % 100;

  printf("The reversal is: %d%d%d\n", num2 % 10, num2 / 10, num / 100);
  return 0;
}
