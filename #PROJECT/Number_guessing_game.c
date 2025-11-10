#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int ran_n,i=1,guess_num;
    srand(time(0));

    ran_n=(rand()%100+1);
    // printf("%d\n",n);
    
    printf("guess the number : \n");
    scanf("%d",&guess_num);
    
    while(guess_num!=ran_n){

        if(guess_num<ran_n){
                printf("give me higher number : ");
            }

            else if(guess_num>ran_n){
                printf("give me lower number : ");
            }
            
            scanf("%d",&guess_num);
            i++ ;
        }
            
        
    printf("congrats! you got it \n");
        printf("you got with %d attempt\n",i);


    return 0;
}