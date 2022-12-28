/* 
    Some important questions:-
 */
//  1.Factorial of any input number
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int n, num;
    long long int fact = 1;
    cout << "\n Enter the number:- ";
    cin >> num;
    if( num < 0){
        cout << "\n Factorial of negative number not exist.";
    }else{
        while(num > 0){
            fact = fact * num;
            num--;
        }
        cout << "factorial of a number is:-"  << fact;
    }
    return 0;
} */

//  2. To print armstrong number between 100 and 999
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int num, d, cube,n,sum;
    cout << "\n Armstrong numbers between 100 and 999 are:- ";
    for (num = 100; num <= 999; num++){
        n= num;
        sum = 0;
        while(n > 0){
            d = n %10;
            cube = d*d*d;
            sum = sum + cube;
            n = n / 10;
        }
        if( num == sum){
            cout << num << "\n";
        }
    }
        return 0;
} */

// 3.Fibonacci series
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int num, x = 0, y = 1,z;
    cout << "\n Enter the number of terms:- ";
    cin >> num;
    for (int i= 1; i <= num; i++)
    {
        z = x + y;
        cout << z << "\n";
        x = y;
        y = z;
        
        
    }
    return 0;
} */

// 4. Check input number is prime number or not
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int num, i, counter = 0;
    cout << "\n Enter the number:- ";
    cin >> num;
    for (i = 1; i <= num;i++){
        if(num %i== 0){
            counter++;
        }
    }
    if(counter == 2){
        cout << "\n it is prime number";
    }else{
        cout << "\n not a prime number";
    }
        return 0;
}
 */
//5. To reverse a number

/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int num,d,reverse = 0;
    cout << "\n Enter the number:- ";
    cin >> num;
    while(num > 0){
        d = num % 10;
        reverse = reverse * 10 + d;
        num = num / 10;
    }
    cout << reverse;
    return 0;
} 
 */

// 6. To check palindrome number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1, n, d, reverse = 0;
    cout << "\n Enter the number:- ";
    cin >> num1;
    n = num1;
    while(n > 0){
        d = n % 10;
        reverse = reverse * 10 + d;
        n = n / 10;
    }
    if(reverse == num1){
        cout << "\n it is palindrome number.";
    }else{
        cout << "\n Not a palindrome number.";
    }
    return 0;
}



