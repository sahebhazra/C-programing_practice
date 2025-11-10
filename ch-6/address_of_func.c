#include<stdio.h>
int addrs(int*);

int adrs(int* x){
   int* k= &adrs;
    *x=9;
    printf("address of k %p",&k);
    return k;
}
int main(){
    int a=5,b;

    b =adrs(&a);
    printf("the address of adrs function %p\n",b);

    return 0;
}