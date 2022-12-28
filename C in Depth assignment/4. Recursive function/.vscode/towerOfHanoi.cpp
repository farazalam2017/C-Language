/* Program to solve Tower of Hanoi problem using recursion */
#include<bits/stdc++.h>
using namespace std;
void tofh(int ndisk, char source, char temp, char dest);
int main(){
    char source = 'A', temp = 'B', dest = 'C';
    int ndisk;
    cout <<  "\n Enter the number of disk:- ";
    cin >> ndisk;
    cout << "\n Sequence is:- ";
    tofh(ndisk, source, temp, dest);
    return 0;
}

void tofh(int ndisk, char source, char temp, char dest){
    if(ndisk ==1){
        cout << "\n Move Disk" << ndisk << "from" << source << ":- " << dest;
        return;
    }
    tofh(ndisk - 1, source, dest, temp);
    cout << "\n Move Disk" << ndisk << "from" << source << ":- " << dest;
    tofh(ndisk - 1, temp, source, dest);
}