#include<stdio.h>

int hello(int* x){
     for (int i = 0; i < 3; i++)
    {
        printf("%d ",x[i]);
    }
}

int main(){

    int a[]={12,23,34};
    hello(a);

    return 0;
}