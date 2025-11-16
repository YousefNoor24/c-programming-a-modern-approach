#include <stdio.h>

int main(void) {
  float loanAmount, interestRate, monthlyPayment;

  printf("Enter amount of loan: ");
  scanf("%f", &loanAmount);
  
  printf("Enter interest rate: ");
  scanf("%f", &interestRate);

  printf("Enter monthly payment: ");
  scanf("%f", &monthlyPayment);

  loanAmount = loanAmount - monthlyPayment + (loanAmount * (interestRate / 100.0) / 12.0);
  printf("Balance remaining after first payment: %.2f\n", loanAmount);

  loanAmount = loanAmount - monthlyPayment + (loanAmount * (interestRate / 100.0) / 12.0);
  printf("Balance remaining after second payment: %.2f\n", loanAmount);

  loanAmount = loanAmount - monthlyPayment + (loanAmount * (interestRate / 100.0) / 12.0);
  printf("Balance remaining after third payment: %.2f\n", loanAmount);
  return 0;
}
