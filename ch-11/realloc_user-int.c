#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n = 0, i = 0, j = 0, k = 0, l = 0;
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter the size of DMA :");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d", &ptr[i]);
    }

    while (j < n){
        printf("the value at ptr[%d] is %d\n", j, ptr[j]);
        j++;
    }
    printf("\n");

    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    for (int k = 0; k < 10; k++){
        scanf("%d", &ptr[k]);
    }

    while (l < 6){
        printf("the value at ptr[%d] is %d\n", l, ptr[l]);
        l++;
    }

   
    printf("\n");

    return 0;
}
