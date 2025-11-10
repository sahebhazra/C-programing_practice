#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr;

    for (int i = 0; i < 10; i++)
    {
        ptr = &arr[i];
        printf("the value in arr[%d] is %d\n", i, *ptr);
    }

    return 0;
}