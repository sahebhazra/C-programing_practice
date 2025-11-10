#include<stdio.h>
int main(){
    int i=10;       // a normal variable "i" with value 10
    int* j=&i;      // pointer variable "j" with address of "i"

                // address of 'i' also value of 'j'

    printf("the value of \'i\' is %d and  address  is %p\n",i,&i);

        printf("the value of \'i\' is %d and  address  is %p\n",*j,j);

        printf("the value of \'i\' is %d and  address  is %p\n",**(&j),*(&j));


    printf("\n");

    printf("the address of \'j\' is %p\n",&j);
    
    return 0;
}