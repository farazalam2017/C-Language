/* Call by reference:-  */
// Note:- In call by reference address of argument are sent to the function
//     :- any changes made to the formal parameter changes the actual argument
//     :- call by reference can be used when the  called function has to return more than one values to the function.
//     :- Also helpful when caller function needs to modify its paramter or when passing large data objects
#include<stdio.h>
void ref(int *p, int *q);
int main()
{
    int a = 5, b = 8;
    printf("\n a= %d and b= %d",a,b);
    ref(&a, &b);
    printf("\n a= %d and b= %d",a,b);
    return 0;
}

void ref(int *p, int *q){
    (*p)++;
    (*q)++;
    printf("\n p= %d and q= %d",*p,*q);
}
