#include<stdio.h>
int main(){
    int a,b,c,d;
    a=2, b=4, c=5, d=6;

    
    if(a>b && a>c &&a>d){
        printf("the value of \' a\' is greater\n");
    }
    else if(b>a && b>c &&b>d){
        printf("the value of \' b\' is greater\n");
    }
    else if(c>a && c>b &&c>d){
        printf("the value of \' c\' is greater\n");
    }
    else if(d>a && d>b &&d>c){
        printf("the value of \' d\' is greater\n");
    }

    else {
        printf("maybe there value is complex\n");
    }

    return 0;
    
}