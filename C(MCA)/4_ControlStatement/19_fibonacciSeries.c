/* Fibonacci series:- 0,1,1,2,3,5,8,..., */
 #include<stdio.h>
 void main()
 {
   int x= 0, y= 1, z, numofterms;
   printf(" Enter the number of terms:- ");
   scanf("%d", &numofterms);
   for (int i = 1; i <= numofterms; i++)
   {
     z = x + y;
     printf(" %d", z);
     x = y;
     y = z;
   }
 }