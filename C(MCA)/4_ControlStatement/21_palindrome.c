// Program to check whether entered number is palindrome or not
#include<stdio.h>
void main()
{
    int n, num, rem, sum = 0;
    printf("Enter the number:- ");
    scanf("%d", &num);
    n = num;
    while(n!= 0)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    if(sum == num)
    {
        printf("\n Entered number is palindrome");
    }else
    {
        printf("\n Not a palindrome");
    }
}



/* 
 2. To print palindrome in given range
*/
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int num, rem, reverse_num, temp, start, end;
    cout << "\n Enter lower limit ";
    cin >> start;
    cout << "\n Enter upper limit ";
    cin >> end;
    cout << "\n Palindrome numbers between " << start << " and " << end;
    for (num = start; num <= end;num++){
        temp = num;
        reverse_num = 0;
        while(temp){
            rem = temp % 10;
            temp = temp / 10;
            reverse_num = reverse_num * 10 + rem;
        }
        if(num== reverse_num){
            cout << num << "\n";
        }
    }
        return 0;
} */