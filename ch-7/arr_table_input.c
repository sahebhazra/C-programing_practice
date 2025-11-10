#include <stdio.h>

int main()
{
    int value[11];
    int n;
    printf("Enter the num of the table :");
    scanf("%d", &n);
    printf("The table of %d with using array is :\n", n);
    for (int i = 0; i <= 10; i++)
    {
        value[i]=i;
        value[i] *= n;
        printf("%d x %d = %d\n", n, i, value[i]);
        // printf("%d\n",value[i]);
    }

    return 0;
}