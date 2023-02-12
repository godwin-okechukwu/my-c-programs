/* program is a function that returns the smaller of two numbers */
#include <stdio.h>

int smaller(int a, int b);

int main ()
{
  int a, b, min;

  printf("Please enter the first number: ");
  scanf("%d", &a);
  printf("Please enter the second number: ");
  scanf("%d", &b);

  min = smaller(a, b);

  printf("\nThe smaller number is: %d", min);
}

int smaller(int a, int b)
{
  if (a <= b)
    return (a);
  else
    return (b);
}

