/* Hollow square pattern */
/* 
    * * * * *
    *       *
    *       *
    *       *
    * * * * *
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j;
    for (i = 0; i<5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if(i== 0 || i==5-1)
            {
                cout <<"*";
            }
            else
            {
                if(j== 0 || j== 5-1)
                {
                    cout << "*";
                }else
                {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
        return 0;
}