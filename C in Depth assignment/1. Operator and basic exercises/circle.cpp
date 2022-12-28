/* This is program to find area and perimeter of circle using radius of circle 
 */
/* Logic:-
    Area of circle = 22/7*r*r;
    Perimeter of square = 2*22/7*r;
    Pie value is 22/7 or 3.142857
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    float radius, area, perimeter;
    cout << "Enter the radius:- \n";
    cin >> radius;
    area = (float)22 / 7 * radius * radius;
    cout << "Area of circle is:- \t " << area;
    perimeter = 2 * (float)22 / 7 * radius;
    cout << "\nPerimeter of circle is:-\t" << perimeter;
    return 0;
}

   
