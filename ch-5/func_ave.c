#include<stdio.h>
float average(float,float ,float);

float average(float x,float y,float z){
    return (x+y+z)/3;
}

int main(){
    float a=45,b=67,c=34;
    printf("the average of 3_numbers is %.2f\n",average(a,b,c));
    return 0;
}