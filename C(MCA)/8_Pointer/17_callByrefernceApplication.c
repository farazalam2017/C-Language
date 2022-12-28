/* Returning more than one value from a function using call by reference */

/* Explanation:- Suppose we want a function to return sum, difference and product of two numbers passed to it. If we use return statement we will have to make three different function with one return statement each. This program shows how we can return all these values from ssingle function.
*/

#include<stdio.h>
void func(int x, int y, int *ps, int *pd, int *pp);
int main()
{
    int a, b, sum, diff, prod;
    a = 6;
    b = 4;
    func(a, b, &sum, &diff, &prod);
    printf("\n Sum= %d, Difference= %d, product= %d", sum, diff, prod);
    return 0;
}

void func(int x, int y, int *ps, int *pd, int *pp)
{
    *ps = x + y;
    *pd = x - y;
    *pp = x * y;
}
