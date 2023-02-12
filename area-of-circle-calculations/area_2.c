/*program to calculate the area of a circle*/
#include <stdio.h>
#define PI 3.141559

float process(float radius);               /*function prototype*/

int main()
{
    float radius, area;                   /*variable declaration*/

    printf("Radius = ? ");
    scanf("%f", &radius);
    area = process(radius);
    printf("Area = %f", area);
    printf("\n");
    return 0;
}

float process(float r)                    /*function definition*/
{
    float a;                              /*local variable declaration*/

    a = PI * r * r;
    return (a);
}
