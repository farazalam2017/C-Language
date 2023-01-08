/* Program to understand strcpy() function */
/*
This function is used for copying one string to another string. strcpy(str1, str2) copyies str2 into str1 including the null character. str2 is source string and str1 is destination string.
Destination string should be a character array or char pointer initilaized to character array.
Programmer ensure that the destination array has enough space to hold the second string.
/*
  char *str(char str1[], char str2[])
  {
    int i= 0;
    while(str1[i]= str2[i] != '\0')
    i++
    return str1;
  }
  */
#include<stdio.h>
#include<string.h>
    void main()
#define size 30
{
  char str1[size], str2[size];
  printf("Enter the string:- ");
  gets(str2);
  strcpy(str1,str2);
  printf("First string :- %s\t Second string is: %s\n", str1, str2);
  strcpy(str1, "alam");
  strcpy(str2, "mohd");
  printf("First string :- %s\t Second string is: %s\n", str1, str2);
}