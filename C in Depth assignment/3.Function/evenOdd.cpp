/* Program to find whether number is odd or even */
#include <bits/stdc++.h>
using namespace std;
void checkEvenOdd(int num2){
    if( num2% 2== 0){
        cout << "\n even ";
    }else{
        cout << "\n odd ";
    }
}
int main(){
    int num1;
    cout << "\n Enter the number:- ";
    cin >> num1;
    cout << " \n Number is:- " << checkEvenOdd(num1);
    return 0;
} 

/* #include <bits/stdc++.h>
using namespace std;
void find(int n);
int main(void){
    int num;
    cout << "\n Enter the number:- ";
    cin >> num;
    find(num);
    return 0;
}

void find(int n){
    if(n %2 ==0){
        cout << "\n it is even ";
    }else{
        cout << "\n it is odd";
    }
}
 */