#include<stdio.h>
void P_refe(int* , int*, int*);

void P_refe(int* x, int* y, int* z){
    *z=*x + *y;

}
int main(){
    int a=5,b=8,c=0;
    P_refe(&a,&b,&c);
    printf("the value of c is %d",c);

    return 0;
}