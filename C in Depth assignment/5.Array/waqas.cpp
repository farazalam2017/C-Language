#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    for (int i = 0; i < 10;i++){
        arr[i] = i + 1;
    }
   

    for (int i = 0; i < 10;i++){
        if(arr[i] %2 == 0){
            arr[i] = arr[i] + 2;
        }else{
             arr[i]+=  1;
        }
    }
  
  for (int i =9; i >= 0;i--){
       cout<<arr[i]<<" \n";
    }

    return 0;
}