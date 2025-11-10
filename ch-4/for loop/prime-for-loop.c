#include<stdio.h>
int main(){
    int prime=1,n=2,i;

    if(n<=0){
        printf("this is an invalid number for this calculation!\n");
        return 0;}

    else if(n==1){
        printf("this is not either prime nor cpmposite \n");
    return 0;}

    else{
        for(i=2;i<n;i++){
            if(n%i==0){
                prime=0;
                break;
             }
        }
    }

            if(prime==0){
                printf("the %d is not prime\n",n);
            }
            else{
                printf("the %d is prime\n",n);
            }

    return 0;
}