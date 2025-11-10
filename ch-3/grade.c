#include<stdio.h>
int main(){
    int s1,s2,s3,average;

    printf("enter your numbers of subjects s1,s2,s3 : \n");
        scanf("%d %d %d",&s1,&s2,&s3);
        
        average = (s1+s2+s3)/3;
        if( average<=100 && average>=90 ){
            printf("your grade is A");
        }
        else if(average>=80 && average<90){
            printf("your grade is B");
        }
        else if(average>=70 && average<80){
            printf("your grade is C");
        }
        else if(average>=60 && average<70){
            printf("your grade is D");
        }
        else if(average>=50 && average<60){
            printf("your grade is E+");
        }
        else if(average>=40 && average<50){
            printf("your grade is E");
        }
        else{printf("your grade is F");}

    
    return 0;

}