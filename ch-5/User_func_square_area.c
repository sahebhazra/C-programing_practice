#include<stdio.h>
#include<math.h>

int area_square(int);

int area_square(int x){
    printf("the area of the square is %d\n",x*x);
}
int main(){
   
    int a=8;
    area_square(a);

    return 0;
}