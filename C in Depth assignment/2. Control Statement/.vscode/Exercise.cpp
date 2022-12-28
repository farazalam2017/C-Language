/* 
Exercises of C in depth
*/

// 1.Program to find volume and area of cuboid.
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int l, b, h, area, vol;
    cout <<"\n Enter the length, width, height of a cuboid:- ";
    cin>> l >> b >> h;
    do
    {
        area = 2 * (l * b + b * h + h * l);
        vol = l * b * h;
    } while (l <= 0 || b <= 0 || h <= 0);
    cout << area << "\n"
         << vol; 

    return 0;
} */

// 2. Write a equivalent if..else statements for the follwing nested switch statement
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 30, y = 5, z;
    if( x == 10){
        z++;
    }else if(x == 20){
        z--;
    }else if(x  == 30){
        if(y ==2)
        z= z+3;
        else if( y ==4 || y == 5){
            z = z + 10;
        } else{
            z = z - 2;
        }
    }else{
        z = 0
    }
        
    return 0;
} */

// 3. Write for loop to print following sequences.
// A. 10, 20, 30, 40, 50, 60, 70
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    for (int i = 10; i <= 70; i= i + 10)
    {
        cout << i << ",";
    }
    return 0;
} */
// B. -10,  -20, -30, -40,-50,-60, -70
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    for (int i = 10; i <= 70; i = i + 10)
    {
        cout << "-" << i << ",";
    }
        return 0;
} */
// C. 1,2,4,7,11,16
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int i, n, sum=1 ;
    cout << "\n Enter the number of terms:- ";
    cin >> n;
    for (i =0; i <= n; i++){
        sum = sum + i;
        cout << sum << "\n";
    }
    

    return 0;
} */
// D. 1,2,4,8,16,32
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int i, n, sum = 0;
    cout << "\n Enter the number of terms:- ";
    cin >> n;
    for (i = 1; i <= n;i = i * 2){
        cout << i << "\n";
    }
    return 0;
}*/
// F. 10, 7, 4, 1, -2, -5;
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int i, num;
    for (i = 10; i >= -5; i = i - 3)
    {
        cout << i << "\n";
    }
        return 0;
} */
// G. 1,11,111,1111
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int i, num, sum = 1;
    for (i = 1; i <= 111112;i= i + (i * 10)){
        
        cout << i << "\n";
    }
        return 0;
} */
// H.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, j,k;
    for (i = 1; i < 8; i++){
        if(i !=3 && i!=5)
        {
            for (j = 1; j <= i; j++){
                for (k = j; k > 0; k--)
                    cout << "\n";
            }
            cout << "\n";
        }
    }
        return 0;
}
