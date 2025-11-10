#include<stdio.h>
int main(){

    int sum=0 , n=0 ,i=1,product=0;
    printf("enter the number of the table :");
    scanf("%d",&n);

    while(i<=10){
        product=n*i;
        sum+=n*i;
        printf("%d x %d = %d\n", n, i, product);
        i++;

    }

    printf("the sum of table is%d\n", sum);
    return 0;
}
