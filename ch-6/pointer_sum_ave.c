#include<stdio.h>
int sum(int* , int*);
int sum(int* x, int* y){
      return *x + *y;
}

int average(int* , int*);
int average(int* x, int* y){
      return (*x + *y)/2;
}
int main(){
    int a=15,b=8;
    printf("the value of c is %d\n", sum(&a,&b));

    printf("the value of c is %d\n", average(&a,&b));

    return 0;
}