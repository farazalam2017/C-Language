/* 
    Write a currency program that tell how many 100, 50, 20, 10, 5, 2 and 1 rupees will be needed a given amount of money. For example if the total amount of money is rupees 545 then five 100 rupees notes, two 20 rupees note, one 5 rupee note will be needed
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, choice, notes;
    cout << "\n Enter the  total amount in rupees:- ";
    cin >> n;
    cout <<"\n Enter the value of notes from which you want to begin(100,50,20,10,5,2,1):- ";
    cin >> choice;
    switch(choice){
        case 100:
            notes = n / 100;
            cout << "\n Number of 100 rupees notes:- "<<notes;
            n = n % 100;
        case 50:
            notes = n / 50;
            cout << "\n Number of 50 rupees notes:- "<<notes;
            n = n % 50;
        case 20:
            notes = n / 20;
            cout << "\n Number of 20 rupees notes:- "<<notes;
            n = n % 20;
        case 10:
            notes = n / 10;
            cout << "\n Number of 10 rupees notes:- "<<notes;
            n = n % 10;
        case 5:
            notes = n / 5;
            cout << "\n Number of 5 rupees notes:- "<<notes;
            n = n % 5;
        case 2:
            notes = n / 2;
            cout << "\n Number of 2 rupees notes:- "<<notes;
            n = n % 2;
        case 1:
            notes = n / 1;
            cout << "\n Number of 1 rupees notes:- "<<notes;
            n = n % 1;
            break;
        default:
            cout << "\n Enter the valid amount:-";
            break;
    }
    cout << "\n"; 
    return 0;
}
    





































