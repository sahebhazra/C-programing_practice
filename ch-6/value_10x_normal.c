#include<stdio.h>
void ten_x(int);

void ten_x(int x){
    x *=10;
}
int main(){
    int a=5;
    ten_x(a);
    printf("the value of a is %d\n",a);
    return 0;
}