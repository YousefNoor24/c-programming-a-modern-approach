#include <stdio.h>

int main(void) {
  int dollarAmount;
  printf("Enter a dollar amount: ");
  scanf("%d", &dollarAmount);

  int twentyDollarBills = dollarAmount / 20;
  dollarAmount = dollarAmount - (20 * twentyDollarBills);

  int tenDollarBills = dollarAmount / 10;
  dollarAmount = dollarAmount - (10 * tenDollarBills);

  int fiveDollarBills = dollarAmount / 5;
  dollarAmount = dollarAmount - (5 * fiveDollarBills);

  int oneDollarBills = dollarAmount / 1;

  printf("$20 bills: %d\n", twentyDollarBills);
  printf("$10 bills: %d\n", tenDollarBills);
  printf("$5 bills:  %d\n", fiveDollarBills);
  printf("$1 bills:  %d\n", oneDollarBills);
  return 0;
}
