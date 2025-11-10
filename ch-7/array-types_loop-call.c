#include<stdio.h>
int main(){

    int j=0,a[]={23,45};
    float b[]={12.2,23.0};
    char c[]={'s','a','h','e','b'};

    for (int i= 0; i <2;){
        printf("the index of i is %d\n value of a is %d\n",i,a[i]);
        i++;}
        
    for (int i= 0; i <2;){
        printf("the value of b is %.2f\n",b[i]);
        i++;
    }
        
    while(j<5){
        printf("the value of c is %c\n",c[j]);
        j++;    
    }
    
    return 0;
}