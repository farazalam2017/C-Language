/* strlen() function */
/* it returns the length of string excluding null character, accept single argument which is pointer to the first character of the string
example:- strlen("suresh")= 6 */
/* Array version
  unsigned int strlen(char str[])
  {
    int i= 0;
    while(str[i] !='\0')
    {
      i++;
    }
    return i;
  }
 */
#include<stdio.h>
#include<string.h>
void main()
{
  char str[40];
  printf("Enter the string:- ");
  gets(str);// can take string with space as character
  printf("Length of the entered string is:- %u\n",strlen(str));
}