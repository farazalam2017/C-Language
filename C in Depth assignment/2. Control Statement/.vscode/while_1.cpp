/* 
    Program to print 1 to 10 using while loop
 */
/* Points to remember:-
    while loop syntax:-
        while(condition){
            statements;
            ------------
            ------------
        }
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i= 1;
    while (i <= 10)
    {
        cout << i << "\n";
        i++;
    }
    
    return 0;
}