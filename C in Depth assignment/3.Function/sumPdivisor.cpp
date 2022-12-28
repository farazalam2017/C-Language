/* Write a function sumPdivisors that finds the sum of proper divisors of a number. Proper divisors of a number are  those numbers by which number is divisible, except number itself. */
/* example:- 36- 1,2,3,4,6,9,18 */
#include<bits/stdc++.h>
using namespace std;
int sumPdivisors(int num1);
int main(){
    int num2;
    cout <<"\n Enter the number ";
    cin >> num2;
  /*   cout << " Sum of proper divisors are:- " << sumPdivisors(num2); */
    sumPdivisors(num2);

    return 0;
}

int sumPdivisors(int num1){
    for (int i = 1; i < num1; i++){
        if(num1 % i == 0){
            cout << i;
        }
    }
}