#include <bits/stdc++.h>
using namespace std;
int main(){
    int x =0, y = 1, z, num1;
    cout << "\n Enter the number of terms:- ";
    cin >> num1;
   for(int i = 1; i < num1; i++){
       z = x + y;
       cout << z <<"\n";
       x = y;
       y = z;
   }
        return 0;
}