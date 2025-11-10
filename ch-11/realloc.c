#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        ptr[i] = i + 2;
        printf("%d\n", ptr[i]);
    }

    free(ptr);
    printf("\n");
    
    ptr = (int*)realloc(ptr,3*sizeof(int));

    for (int j = 0; j < 3; j++)
    {
        ptr[j]=j-1;
        printf("%d\n", ptr[j]);
    }

    free(ptr);
    printf("\n");

    return 0;
}