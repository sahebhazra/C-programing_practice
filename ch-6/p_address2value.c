#include<stdio.h>

int main(){
    int a=3;
    int* b=&a;

    printf("the address of a is %p\n",&a);
    printf("the address of a is %p\n",b);

    printf("the value of a is %d\n",*b);
    return 0;
}