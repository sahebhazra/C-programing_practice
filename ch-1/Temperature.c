/*Program :- Centigrade to Fahrenheit 
  Author:- Saheb hazra 
*/

#include <stdio.h>

int main()
{
        // c= centigrade 
        // f= Fahrenheit
  float c,f;
   printf("centigrade: ");
   scanf("%f",&c);
   
   f = (9.0/5.0)*c+32;
   printf("Fahrenheit value %.2f",f);
  
    return 0;
}