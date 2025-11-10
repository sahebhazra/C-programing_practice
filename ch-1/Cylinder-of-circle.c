/*Program :- Cylinder of Circle
  Author:- Saheb hazra 
*/

#include <stdio.h>

int main()
{
    int radius, height;
    float pai= 3.14159;
    float area, cylinder;
    
    printf("radius of circle: ");
    scanf("%d", &radius);
    
    
    printf("height of circle: ");
    scanf("%d", &height);
    
    
       //formula of 
    area= pai*radius*radius;
    cylinder = area*height;
    
    printf("radius is %d\n", radius);
    printf("height is %d\n", height);
    printf("area is %f\n", area);
    printf("Cylinder of Circle is %f", cylinder);
  
   return 0; 
}