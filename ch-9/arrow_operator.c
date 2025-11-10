#include <stdio.h>
typedef struct arrow_operator
{
    char x;
    int y;
} arop;

int main()
{
    arop *ptr;
    arop a;
    ptr = &a;
    ptr->x = 's';
    ptr->y = 12;
    printf("%d and %c \n", ptr->y, ptr->x);

    return 0;
}