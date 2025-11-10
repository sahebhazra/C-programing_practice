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
    struct employee e1;
    struct employee* ptr;
     ptr= &e1;
    strcpy((*ptr).name,"saheb");
    (*ptr).code=231;
    (*ptr).salary=78.00;
    
    printf("%s %d %.2fl\n", (*ptr).name, (*ptr).code, (*ptr).salary);


    struct employee e2;
    struct employee* ptr2;
     ptr2= &e2;
    strcpy(ptr2->name,"hello");
    ptr2->code=267;
    ptr2->salary=98.00;
    
     printf("%s %d %.2fl\n", ptr2->name, ptr2->code, ptr2->salary);

    return 0;
}