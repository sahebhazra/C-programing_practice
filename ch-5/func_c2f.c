#include<stdio.h>
float c2f(float);

float c2f(float x){
   return ((9.0/5.0)*x)+32.0;
}

int main(){
    float a;
    printf("Enter the celsius temperature : ");
    scanf("%f",&a);
    printf("the tempreter in fahrenheit is %.2f\n",c2f(a));
    return 0;

}