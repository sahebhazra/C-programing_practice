#include<stdio.h>
int main(){
    int facto=1,n=8,i;

    if(n==0 || n==1){
        printf("factorial of %d is 1\n",n);
    }
    else{

        for(i=2;i<=n;i++){
            facto*=i;
        }
        printf("factorial of %d is %d\n",n,facto);
    }
    return 0;
}