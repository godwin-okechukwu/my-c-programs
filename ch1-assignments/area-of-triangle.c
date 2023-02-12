/* program calculates the area of a triangle */
#include <stdio.h>

int main ()
{
  float base, height, area;

  printf("Base: ");
  scanf("%f", &base);
  printf("Height: ");
  scanf("%f", &height);

  area = (base * height)/2;

  printf("Area of triangle: %f", area);
}
