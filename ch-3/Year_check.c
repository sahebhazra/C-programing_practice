#include<stdio.h>
int main(){

    int current_year=2025;

    if((current_year%4==0 && current_year%100!=0)||current_year%400==0)
    {

        printf("the year %d is leap-year", current_year);
    }
    else{
        printf("the year %d is not leap-year", current_year);
    }
    return 0;
}