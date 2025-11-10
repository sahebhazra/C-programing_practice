#include <stdio.h>
#include <string.h>

struct employee
{
    char name[10];
    int code;
    float salary;
};

int main()
{
    struct employee e[3];
    //suppose employee count start as index 1
    for (int i = 0; i < 3; i++)
    {
       printf("enter the following deatils for \nemployee[%d](name,code,salary) : ",i+1);
        scanf("%s",e[i].name);
         scanf("%d",&e[i].code);
          scanf("%f",&e[i].salary);
    
        printf("detalis of employee e[%d] are \n",i+1);
         printf("name : %s \n",e[i].name);
          printf("code : %d \n",e[i].code);
           printf("salary : %.2f \n",e[i].salary);

           printf("\n");

    }
    

    return 0;
}