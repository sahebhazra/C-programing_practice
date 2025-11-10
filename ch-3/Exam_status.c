#include<stdio.h>
int main(){

    int sub1 , sub2 ,sub3,average;
     printf("enter your numbers of subjects sub1, sub2,sub3 : \n");
        scanf("%d %d %d",&sub1 ,&sub2 ,&sub3);

        average = (sub1+sub2+sub3)/3;

    if((sub1>=33 && sub2>=33 && sub3>=33 )&& average>=40){
        printf("your are passed ");
    }

    else{
        
        if(sub1<33||sub2<33||sub3<33 && average<40)
        printf("you are fail!\n deu to low marks in a particilar subject\n and alsofor low average parsenteg\n");

        else if(sub1<33||sub2<33||sub3<33)
        printf("you are fail!\n deu to low marks in a particilar subject\n");

        else if(average<40)
        printf("you are fail!\n deu to low average parsenteg\n");
        

    }
        
    return 0;
}