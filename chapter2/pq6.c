#include <stdio.h>

int main(void) {
  int x;
  printf("Enter a value for x: ");
  scanf("%d", &x);

  int powerOfFive = x * x * x * x * x;
  int powerOfFour = x * x * x * x;
  int cubicNum = x * x * x;
  int squaredNum = x * x;

  int total = (3 * powerOfFive) + (2 * powerOfFour) - (5 * cubicNum) - squaredNum + (7 * x) - 6;

  printf("Value: %d\n", total);
  return 0;
}
