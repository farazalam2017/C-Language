/* Program to print the pascal's triangle using 2-D array */
#include<bits/stdc++.h>
#define MAX 15
using namespace std;
int main()
{
    int a[MAX][MAX];
    int i, j, n;
    cout << "\n Enter the n:- ";
    cin >> n;
    for (i = 0; i <= n;i++)
    {
        for (j = 0; j <= i;j++)
        {
            if(j== 0||i==j )
                a[i][j] = 1;
                else
                    a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (i = 0; i < n;i++)
    {
        for (j = 0; j <= i;j++)
        {
            cout << " " << a[i][j];
        }
        cout << "\n";
    }
}