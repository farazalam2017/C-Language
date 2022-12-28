/* Program to understand the effect of passing array to function */
#include<bits/stdc++.h>
using namespace std;
void func(int val[]){
    int sum = 0, i;
    for (i = 0;i < 6; i++){
        val[i] = val[i] *val[i];
        sum = sum + val[i];
    }
    cout << "\n Sum of square is:- " << sum;
    
}
int main(void){
    int arr[6] = {1,2,3,4,5,6}, i;
    func(arr);// address is passing
    cout << "\n Content of the array is:-  ";
    for (i = 0; i < 6;i++ ){
        cout << arr[i] << " ";
    }
    return 0;
}






