#include<stdio.h>
int star(int);
int star(int x){

    for(int i=0; i<x; i++){
        printf("* ");
    }
}
int main(){
    printf("%d",star(3));
    return 0;
}