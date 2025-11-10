/*Program :- Interest calculate
  Author:- Saheb hazra 
*/

#include <stdio.h>

int main()
{
   int p, t;
   float r,i;
   
   printf("amount of Principle / p is: ");
   scanf("%d",&p);

   printf("time deuration / t is: ");
   scanf("%d",&t);

   printf("rate of interest / r is: ");
   scanf("%f",&r);
   
   
   i= p*r*t/100;

   printf("Intrest amount %f is",i);
  
    return 0;
}