/* strcmp() function */
/*
    Declaration:- int strcmp(const char *s1, const char *s2);
    ---------------------------------------
    ---------------------------------------
    This function is used for lexicographic comparison of two strings. If two strings match, strcmp() returns a value 0, otherwise it return a non- zero value. It compare two strings character by character and comparison stops when either the end of string is reached or the corresponding character in the two string are not same.
    --------------------------------------
    --------------------------------------
    strcmp(s1, s2) retuns value-
    <0 when s1<s2=> negative value is returned
    =0 when s1=s2=> 
    >0 when s1>s2=> positive value is returned
 */

#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char str1[50],str2[50];
    cout << "\n Enter the two strings:- \n ";
    gets(str1);
    gets(str2);
    if(strcmp(str1, str2) == 0)
    {
        cout << "\n Strings are same  ";
    }else
    {
        cout << "\n Strings are not same ";
    }
    return 0;
}

/*
 =============== ARRAY VERSION =====================
 int strcmp(char str1[], char str2[])
 {
    int i;
    for(i= 0; str1[i] == str2[i]; i++)
    {
        if(str1[i] == '\0')
        {
            return 0;
        }
        return( str1[i]- str2[i]);
    }
 }
 */

/*
================ POINTER VERSION =================
int strcmp(char *str1, char *str2)
{
    while( *str1 == *str2)
    {
        if(*str1 == '\0')
        {
            return 0;
        }
        str1++;
        str2++;
    }
    return (*str1- *str2);
}
 */