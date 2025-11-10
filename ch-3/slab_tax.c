#include<stdio.h>
int main(){
    int income;
    float tax, tax_ammount, after_detaction_money;

    printf("what is your income ammount: ");
    scanf("%d",&income);

    if(income<=250000)
    {tax=0.00;
     printf("you dont need to pay any tax\n");}

    else if(income>250000 && income<=500000){
        tax=5.0;
        tax_ammount=income*(tax/100.0);
        after_detaction_money = income - tax_ammount;
        printf("your income is %d\n tax is %.2f\n tax_ammount is %.2f\n after_detaction_money is %.2f ", income, tax, tax_ammount, after_detaction_money);
    }

    else if(income>500000 && income<=1000000){
        tax=20.0;
        tax_ammount=income*(tax/100.0);
        after_detaction_money = income - tax_ammount;
        printf("your income is %d\n tax is %.2f\n tax_ammount is %.2f\n after_detaction_money is %.2f ", income, tax, tax_ammount, after_detaction_money);
    }

    else if(income>1000000){
        tax=30.0;
        tax_ammount=income*(tax/100.0);
        after_detaction_money = income - tax_ammount;
        printf("your income is %d\n tax is %.2f\n tax_ammount is %.2f\n after_detaction_money is %.2f ", income, tax, tax_ammount, after_detaction_money);
    }


    return 0;
}