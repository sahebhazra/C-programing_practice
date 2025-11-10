#include<stdio.h>
int main(){
    int i=10;       // a normal variable "i" with value 10
    int* j=&i;      // pointer variable "j" with address of "i"
    int** k=&j;     // pointer to pointer variable "k" with address of "*j"


    printf("the value of \'i\' is %d and  address  is %p\n",i,&i);

        printf("the value of \'i\' is %d and  address  is %p\n",*j,j);

        printf("the value of \'i\' is %d and  address  is %p\n",**(&j),*(&j));

        printf("the value of \'i\' is %d\n",**k);


    printf("\n");

        printf("the  address  of \'i\'is %p\n",&i);

    printf("\n");

        printf("the  address  of \'j\'is %p\n",&j);
        printf("the  address  of \'j\'is %p\n",k);

    printf("\n");
        printf("the  address  of \'k\'is %p\n",&k);


    
    return 0;
}