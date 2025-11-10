#include<stdio.h>
void change(int*);

void change(int* x){
    *x=9;
}
int main(){
    int a=5;
    change(&a);
    printf("the vlue of a is %d\n",a);

    return 0;
}