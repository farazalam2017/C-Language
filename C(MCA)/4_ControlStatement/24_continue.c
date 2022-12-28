#include<stdio.h>
void main(){
    int n;
    for ( n = 0; n <= 5; n++)
    {
        if(n == 3)
            continue;
        printf(" %d", n);
    }
    printf("\n");

}