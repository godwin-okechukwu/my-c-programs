/*program to calculate the area of a circle, with error checking*/
#include <stdio.h>
#define PI 3.14159

float process(float radius);                /*function prototype*/

int main()
{
    float radius, area;                    /*variable declaration*/
    printf("Radius = ? ");
    scanf("%f", &radius);

    if  (radius < 0)
      area = 0;

    else
      area = process(radius);
    
    printf("Area = %f\n", area);

    return 0;
}

float process(float r)
{
    float a;
    a = PI * r * r;
    return (a);
}