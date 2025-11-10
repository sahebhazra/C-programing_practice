#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt", "rb");
    int a;
    fscanf(ptr, "%d", &a);
    printf("%d\n", a);

    return 0;
}