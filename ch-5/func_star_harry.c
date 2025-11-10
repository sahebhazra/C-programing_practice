#include<stdio.h>
int star(int);
int star(int x){

    for(int i=0; i<x; i++){
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
      printf("\n");
    }
}
int main(){
    printf("%d",star(3));
    return 0;
}