#include<stdio.h>
void swap(int*, int*);

void swap(int* x, int* y){
    int help=*x;        //value of x in help
    *x=*y;              // value of y in x
    *y=help;            // value of help in y
    *y+=*x;             // value of y is y+x
}
int main(){
    int a=4,b=8;
    swap(&a,&b);
    printf("the value of a is %d b is %d",a,b);

    return 0;
}