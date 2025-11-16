#include <stdio.h>

#define MY_MATH_PI 3.14159

int main(void) {
  float radius = 0;

  printf("Enter the radius of the sphere: ");
  scanf("%f", &radius);

  float fraction = 4.0f/3.0f;
  float cubicRadius = radius * radius * radius;
  float volume = fraction * MY_MATH_PI * cubicRadius;
    

  printf("Volume of a sphere with a %.0f-meter radius: %.2f\n", radius, volume);

  return 0;
}
