/* 
    Program to print 1- 10 using do while
 */
/*
    Points to remember
        do-while syntax:-
            do{
                statement;
                ----------
            }while(expression/condition);
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i = 1;
    do
    {
        cout << i << "\n";
        i++;
    } while (i<=10);
    
    return 0;
}