/* 
        *
       *** 
      *****
     *******  
    ********* 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Size of the pyramid
    int size;
    cout << "\n Enter the size:- ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        // Print spaces
        for (int j = 0; j < size - i - 1; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
        return 0;
}