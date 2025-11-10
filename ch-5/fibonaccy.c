#include<stdio.h>
int fibonaccy(int);
int fibonaccy(int x){
    if(x<=1){
        return x;
    }
    return fibonaccy(x-1) + fibonaccy(x-2);
}
int main(){
    int a=6;
    printf("the %dth position of fibonaccy is %d\n",a,fibonaccy(a));
    return 0;
}