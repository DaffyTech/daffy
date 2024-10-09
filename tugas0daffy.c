/* This program adds two integer numbers */
#include <stdio.h>
int main()
{
    int a, b, sum;                     /* Deklarasi Variable */
    printf("Enter first integer = ");  /* prompt the user */
    scanf("%d", &a);                   /* read first integer */
    printf("Enter second integer = "); /* prompt the user */
    scanf("%d", &b);                   /* read second integer */
    sum = a + b;                       /* calculate the sum */
    printf("Sum = %d\n", sum);         /* print the calculated sum */
    return 0;                          /* indicate that program ended successfully */
}