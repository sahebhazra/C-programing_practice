#include<stdio.h>

void hello(int* x){
    *x=56;   
}

int main(){

    int a[]={12,23,34};

    printf("the a[1] is %d\n",a[1]);
    hello(&a[1]);
    printf("the a[1] is now %d\n",a[1]);



    return 0;
}