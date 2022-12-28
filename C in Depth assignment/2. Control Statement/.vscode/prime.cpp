/* 
    1.Check prime number or not
 */
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 0, i, num;
    cout << "\n Enter the number:- ";
    cin >> num;
    for (i = 1; i <= num;i++){
        if(num % i ==0){
            n++;
        }
    }
    if(n == 2){
        cout << "\n It is prime number:-";
    }else{
        cout << "\n It is not prime number";
    }
        return 0;
} */

/* 
    2. Print all prime number in the given range
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, j,k, num ;
    cout << "\n Enter the number upto which you want prime:- ";
    cin >> num;
    cout << "\n Prime number are:-\n ";
    for (i = 2; i <= num; i++){
        int counter = 0;
        for (j = 1; j <= i; j++){
            if(i%j == 0){
                counter++;
            }
        }
        if(counter == 2){
            cout << i << "\n";
        }
    }
        return 0;
}


