/* Using the reverse() in previous program make a function isPalindrome() that inputs a number and check whether it is a palindrome number.  */
#include<stdio.h>
int reverse(int n);
int isPalindrome(int num2);
void main()
{
  int num;
  printf(" Enter the number:- ");
  scanf("%d", &num);
  if(isPalindrome(num))
    printf(" Number is palindrome \n");
    else
    printf(" Number is not palindrome");
}

int isPalindrome(int num2){
  if(num2 == reverse(num2))
    return 1;
  return 0;
}

int reverse(int n){
  int num1;
  int rem;
  int reverse= 0;
  do{
    rem = n % 10;
    reverse = reverse * 10 + rem;
    n = n / 10;
  } while (n != 0);
  return reverse;
}