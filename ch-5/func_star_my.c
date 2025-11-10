#include<stdio.h>
int star(int);
int star(int x){

    for(x>0;x--;){

        if(x==2){
            printf("*\n");
        }
        else if(x==1){
            printf("* * *\n");
        }
        else if(x==0){
            printf("* * * * *\n");
        }
    }
}
int main(){
    printf("%d",star(3));
    return 0;
}