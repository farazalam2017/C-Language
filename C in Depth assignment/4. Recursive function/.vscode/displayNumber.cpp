/* To display number from n to 1 */
#include <bits/stdc++.h>
using namespace std;
void display(int n);

int main(){
    int num1;
    cout << "\n Enter the number:- ";
    cin >> num1;
    display(num1);

    return 0;
}

void display(int n){
    if(n == 0){
        return;
    }
    cout << " " << n;
    display(n - 1);
}

/* To display from 1 to n */
/* #include <bits/stdc++.h>
using namespace std;

void display(int n);

int main(){
    int num1;
    cout << "\n Enter the number:- ";
    cin >> num1;
    display(num1);
    return 0;
}

void display(int n){
    if( n == 0)
        return;
    display(n - 1);
    cout << " " << n;
} */