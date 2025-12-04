#include <stdio.h>

int main(void) {
  int hour, min;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &min);
  
  if (hour < 11) {
    printf("Equivalent 12-hour time: %02d:%02d AM\n", hour == 0 ? 12 : hour, min);
  } else { 
    printf("Equivalent 12-hour time: %02d:%02d PM\n", hour == 12 ? 12: hour - 12, min);
  }
  
  return 0; 
}
