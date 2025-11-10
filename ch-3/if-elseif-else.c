#include<stdio.h>
int main(){
    int a=2, b=5,c=6;

    if(a==5 && b==5){
        printf("hello we are true as condition\n");}

    else if (a>2 || c==7)
    {printf("either one condition is true\n");}

    else if(b!=5 || c!=6){
        printf("this is because of \"!\" NOT operator");
    }

    else{
        printf("maybe there no matches accoding to the condition\n");
    }
    
    return 0;
}