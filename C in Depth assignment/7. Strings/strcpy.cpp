/* strcpy() function */
/* 
    Declaration:- char *strcpy(char *s1, const char s2)
    ===================================================
    This function is used for copying one string to another. The call strcpy(str1, str2), copies str2 to str1 including null character. Here str2 is the sourse string and str1 is the destination string. The old content of the destination string  str1 are lost. The function returns a pointer to the destination string str1.

        The destination string should be a character array or a char pointer initialized to a character array or a character pointer initilized to dynamically allocated memory. It can't be a string constant because it has to be modified .
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[50], str2[50];
    cout << "\n Enter the string:- ";
    gets(str2);
    strcpy(str1, str2);
    cout << "\n First string is:- \n" << str1;
    cout << "\n Second string is:- \n"<<str2;
    strcpy(str1, "Delhi");
    strcpy(str2, "Banglore");
    cout << "\n First string is:- " << str1;
    cout << "\n Second string is:- " << str2;
    return 0;
}

/* 
=============== ARRAY VERSION ==================================
char strcpy(char str1[],  chat str2[])
{
    int i= 0;
    while(str1[i]) = str2[i] != '\0')
    {
        i++;
    }
    return str1;
}

==================== POINTER VERSION ==========================
char *strcpy(char *str1, char *str2)
{
    while((*str1 = *str2) != '\0')
    {
        str1++;
        str2++;
    }
    return str1;
}