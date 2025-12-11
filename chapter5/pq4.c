#include <stdio.h>

int main(void) {
  int windSpeed;
  
  printf("Enter a wind speed (knots): ");
  scanf("%d", &windSpeed);

  if (windSpeed < 1) {
    printf("Calm\n");
  } else if (windSpeed >= 1 && windSpeed <= 3) {
    printf("Light air\n");
  } else if (windSpeed >= 4 && windSpeed <= 27) {
    printf("Breeze\n");
  } else if (windSpeed >= 28 && windSpeed <= 47) {
    printf("Gale\n");
  } else if (windSpeed >= 48 && windSpeed <= 63) {
    printf("Storm\n");
  } else {
    printf("Hurricance\n");
  }

  return 0;
}
