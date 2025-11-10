#include<stdio.h>
int main(){
    int i=10;       // a normal variable "i" with value 10
    int* j=&i;      // pointer variable "j" with address of "i"
    int** k=&j; 

    printf("the value of i is %d", **k);
    return 0;
}