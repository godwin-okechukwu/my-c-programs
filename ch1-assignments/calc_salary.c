/* program calculates net salary after deducting tax */
#include <stdio.h>

int main ()                                /* FUNCTION HEADING */
{
  float gross, tax, net;                   /* VARIABLE DECLARATION */

  printf("Gross salary: ");                /* OUTPUT STATEMENT (PROMPT)*/
  scanf("%f", &gross);                     /* INPUT STATEMENT */
  tax = 0.14 * gross;                      /* ASSIGNMENT STATEMENT */
  net = gross - tax;                       /* ASSIGNMENT STATEMENT */
  printf("Taxes withheld: %.2f\n", tax);   /* OUTPUT STATEMENT */
  printf("Net salary: %.2f", net);         /* OUTPUT STATEMENT */
}
