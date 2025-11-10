#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int x = 5*sizeof(int);
    ptr = (int *)malloc(x);

    for (int i = 0; i < 3; i++)
    {
        ptr[i] = i + 2;
        printf("%d\n", ptr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%p\n", &ptr[i]);
    }

    return 0;
}