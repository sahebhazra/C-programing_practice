#include<stdio.h>
float force(int);

float force(int m){
    float g=9.8;
    return m*g;
}
int main(){
    float w;
    printf("Enter the mass of the body (in kg) :");
    scanf("%f",&w);
    printf("the force of attraction on the body is %.2f",force(w));
    return 0;
}