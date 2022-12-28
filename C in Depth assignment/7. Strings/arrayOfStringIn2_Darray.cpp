/* Program to print the strings of 2-D array */
/* 
Note :- char arr[5][10]= {
                                "white",
                                "red",
                                "green",
                                "Yellow"
                        }
        first subscript denote number of strings and second subscript denotes the maximum length that each string can have.
    arr[i][j]=> represent jth character in ith string
 */
#include<bits/stdc++.h>
using namespace std;
#define N 5
#define LEN 10
int main()
{
    char arr[N][LEN] = {
        "white",
        "red",
        "green",
        "yellow",
        "blue"};
    int i;
    for (i = 0; i < N; i++)
    {
        cout << "\n Strings are:- " << arr[i];// Print value
        cout << "\n Address is:- " << arr;// Print address
    }

        return 0;
}