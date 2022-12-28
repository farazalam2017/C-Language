/* 
    Write a program to accept any number and print the cube of all number from 1 to n which are divisible by 3. Rewrite program using continue statement.
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout << "\n Enter the number upto which you want the sum of cubes ";
    cin >> num1;
    for (int i = 1; i <= num1; i++){
        num2 = i * i * i;
        if(num2 % 3 != 0){
            continue;
            
        }
        cout << num2 << "\n";
        
    }

        return 0;
}