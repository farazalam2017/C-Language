/* 
        *********
         *******
          *****
           ***
            *
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Size of the pyramid
    int num1;
    cout << "\n Enter the size of the pyramid:- ";
    cin >> num1;
    for (int i = 0; i < num1; i++)
    {
        // print spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";    
        }
        // Print stars
        for (int k = 0; k < 2 * (num1 - i) - 1; k++)
        {
            cout << "*";
        }
        cout << "\n ";
    }
        return 0;
}