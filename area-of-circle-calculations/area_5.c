/*program to calculate the area of circles, using a for loop;
the number of circles is not specified*/

#include <stdio.h>
#define PI 3.14159

float process(float radius);              /*function prototype*/

int main()
{
    float radius, area;                  /*variable declaration*/
    int count;                           /*variable declaration*/

    printf("To STOP, enter 0 for the radius\n");
    printf("\nRadius = ? ");
    scanf("%f", &radius);

    for (count = 1; radius != 0; ++count){
        if (radius < 0)
            area = 0;
        else
            area = process(radius);

        printf("Area = %f\n", area);

        printf("\nRadius = ? ");
        scanf("%f", &radius);
    }
    
    printf("\nCount is %d", count);
    return 0;
}

float process(float r)                  /*function definition*/
{
    float a;                            /*local variable declaration*/

    a = PI * r * r;

    return (a);
}