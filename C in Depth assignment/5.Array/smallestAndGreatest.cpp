/* Program to find largest and smallest */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[20] = {0, 11, 22, 33, 44, 55, 66, 77, 88, 99};
    int small, large;
    small = large = arr[0];
    for (int i = 0; i < 10;i++)
    {
        if(arr[i] < small){
            small = arr[i];
        }
        if(arr[i] > large){
            large = arr[i];
        }
    }
    cout << "\n Smallest is:- " << small << " and largest is " << large;
}