/* Input and output strings using gets and puts */
/* 
For entering strings with whitespace we use gets(). It stops reading only when it encounter a newline and replace this newline by the null character.
 */

/* 
gets cannot check the buffer space, if more input is provided than the size of the array then it will overwrite location after the end of the array. To avoid this we use fgets in C language
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[5];
    cout << "\n Enter the name:-";
    gets(name);
    cout << "\n Entered name is:- ";
    puts(name);
    cout << strlen(name);
}