/* Program to pass array element to a function */
#include<bits/stdc++.h>
using namespace std;
void check(int n);
int main(){
    int arr[15], i;
    cout <<"\n Enter the array elements:-";
    for(i = 0; i < 10;i++)
    {
        cin >> arr[i];
        check(arr[i]);
    }
        return 0;
}

void check(int n){
    if(n %2 == 0){
        cout <<n<<  "  is even\n";
    }else{
        cout <<n<< "  is odd \n";
    }
}