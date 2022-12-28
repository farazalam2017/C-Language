/* Call by value */
// Note:- In call by value, only the values of argument are sent to the function
//     :- Any changes made to the formal parameter do not effect the actual parameter
#include<stdio.h>
void value(int x, int y)//Formal Parameter
{
    x++;
    y++;
    printf("\n x= %d and y= %d", x, y);
}

int main(){
    int a = 5, b = 8;
    printf("\n a= %d and b= %d", a, b);
    value(a, b);//Actual Parameter
    printf("\n a= %d and b= %d", a, b);
    return 0;
}