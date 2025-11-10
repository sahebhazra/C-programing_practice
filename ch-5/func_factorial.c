#include<stdio.h>

int factorial(int);

int factorial(int x){
    int z;
    if(x==0 || x==1){
        return 1;
    }
    else{
        z=factorial(x-1)*x;
        return z;
    }
}

int main(){
    int a=8,b;

    b=factorial(a);
    printf("the factorial of %d is %d\n",a,b);

    return 0;
}