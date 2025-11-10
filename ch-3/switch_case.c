#include<stdio.h>
int main(){
    int a=6;
    switch (a){
        case 1:
            printf("i'm 1\n");

        case 2:
            printf("i'm 2\n");
        
        case 3:
            printf("i'm 3\n");
        case 6:
            printf("i'm 6\n");
            break;

        case 7:
            printf("i'm 7\n");
        case 8:
            printf("i'm 8\n");

        default:
            printf("there no condition has matched\n");
    }
    return 0;
}