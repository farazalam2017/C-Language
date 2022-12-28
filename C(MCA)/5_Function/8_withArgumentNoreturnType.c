/* Function with argument but no return type */
#include<stdio.h>
void sum(int, int);
void main()
{
    int a, b;
    printf(" Enter the number:- ");
    scanf("%d%d", &a, &b);
    sum(a, b);
}

void sum(int a, int b)
{
    int s = 0;
    s = a + b;
    printf("\n Sum of number is:-%d ", s);
}