/* 
    Program to check whether entered year is leap year or not
 */
/* 
    Things to remember :-
    ->  Year consisting of 366 days instead of 365 days is called as  leap year. Extra one day is added in February which is of 29 days in leap year.
 */
/* Logic:-
    if year is century year(divided by 100) and it is divisible by 400 then it is leap year, also if it is not 
 */
 #include <bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cout << "\n Enter the year to check for leap year\n";
    cin >> year;
    if(year%100 != 0){
        if(year%4==0){
            cout << "\n Entered year is leap year";
        }else{
            cout << "\n Entered year is not leap year ";
        }

    }else{
        if(year%400 == 0){
            cout << "\n Entered year is leap year";
        }else{
            cout << "\n Entered year is not leap year";
        }
    }
    return 0;
}
 




















