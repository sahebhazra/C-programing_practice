#include<stdio.h>   
int sum(int ,int );                            // function prototype

int sum(int x, int y){                       // function defination
    printf("the sum of the program is %d\n",x+y);
    return 0;
}

int main(){
    int a=45,b=45;
    sum(a,b);                               // function call

    int c=25;
    sum(a+b,c);                             // function call

    sum(50,50);                             // function call

    sum(10+10,40+c);                        // function call 

    return 0;
}