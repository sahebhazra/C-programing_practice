#include <stdio.h>
int main()
{
    int radius;
    float pai/*π*/= 3.14159;
    float area;
    
    printf("radius of circle: ");
    scanf("%d", &radius);
    
       //formula 
    area= pai*(radius*radius);
    printf("area of Circle is %f", area);
  
   return 0; 
}