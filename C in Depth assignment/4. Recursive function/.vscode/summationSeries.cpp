/* Display and summation of series*//* 
#include <bits/stdc++.h>
using namespace std;

int displaySumAndNumber(int x);


int main(){
    int num1;
    cout << "\n Enter the number:- ";
    cin >> num1;
    cout << displaySumAndNumber(num1);
    return 0;
}

int displaySumAndNumber(int x){
    int sum = 0;
    if(x == 0){
        return 0;
    }else{
        sum = x + displaySumAndNumber(x - 1);
        cout << x <<  "+ " ;
        return sum;
    }

} */
#include <bits/stdc++.h>
using namespace std;
int series(int n);

int main(void){

    int n;
    cout << "\n Enter the number:- ";
    cin >> n;
    cout << series(n);
}

int series(int n){
    int sum;
    if(n == 0){
        return 0;
    }else{
        sum = n + series(n - 1);
        cout <<n << " + ";
        return sum;
    }
    
}