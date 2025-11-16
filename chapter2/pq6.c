#include <stdio.h>

int main(void) {
  int x;
  printf("Enter a value for x: ");
  scanf("%d", &x);

  int total = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("Value: %d\n", total);
  return 0;
}
