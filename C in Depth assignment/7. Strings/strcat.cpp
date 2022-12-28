/* strcat() function */
/* 
    This function is used to append a copy of string at the end of other string. The null character from str2 is removed and str2 is added at the end of str1. A pointer to the first string str1 is returned by the function. 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[20], str2[20];
    cout << "\n Enter the two strings:- ";
    gets(str1);
    gets(str2);
    cout <<"\n Combined strings is:- "<<strcat(str1, str2);

    return 0;
}

/*
================== ARRAY VERSION ===============================
char *strcat(char str1[], char str2[])
{
    int i= 0, j= 0;
    while(str1[i] != '\0')  // go to end off the first string
    i++;
    while(str1[i++] = str2[j++]) // Add second string at the end off first
    return str1;
}
 */

/*
================ POINTER VERSION ===============================
char *strcat(char *str1, char *str2)
{
    char *p= str1;
    while(*p != '\0')
    {
        p++;
    }
    while( *p++ = *str2++)
    {
        ;
    }
    return str1;
}

 */