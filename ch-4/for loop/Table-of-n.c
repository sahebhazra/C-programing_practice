#include<stdio.h>
int main(){
    int n,p,i;
    printf("enter the number : ");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        p=n*i;
        printf("%d x %d = %d\n",n,i,p);
    }

    return 0;

}