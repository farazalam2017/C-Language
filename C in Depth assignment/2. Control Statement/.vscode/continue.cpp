/* 
    Program to understand use of continue statement
 */
/* 
    Points to remember:-
        The continue statement is used when we want to go to the next iteration of the loop after skippoin some statement of the loop.
            When continue statement is encountered all the remaining statement in current iteration are not executed and loop continus with the next iteration.
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    for ( n = 0; n <= 5; n++)
    {
        if(n == 3)
            continue;
        cout << n << "\n";
    }

    return 0;
}