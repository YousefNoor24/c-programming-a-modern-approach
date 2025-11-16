#include <stdio.h>

int main(void) {
  float amount;
  printf("Enter an amount: ");
  scanf("%f", &amount);
  
  float tax = 0.05f;
  float amountWithTax = amount + (amount * tax);

  printf("With tax added: $%.2f\n", amountWithTax);

  return 0;
}
