/* This is program to accept marks in 5 subject and calculate total percentage marks */
/* Logic:-
    Percentage = actual value/ total value * 100
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    float sub1, sub2, sub3, sub4, sub5, ttlmarks, percentage;
    cout << "\n Enter the marks of Different subject(out 0f 100):- \n";
    cout << "\n Enter the marks of English:- \n";
    cin >> sub1;
    cout << "\n Enter the marks of hindi:- \n";
    cin >> sub2;
    cout << "\n Enter the marks of Maths:- \n";
    cin >> sub3;
    cout << "\n Enter the marks of EVS:- \n";
    cin >> sub4;
    cout << "\n Enter the marks of Computer:- \n";
    cin >> sub5;
    ttlmarks = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (ttlmarks / 500) * 100;
    cout << "\n Percetage obtained by student is :-" << percentage << "%";
    return 0;
}
