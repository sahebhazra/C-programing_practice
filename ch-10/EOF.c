#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt", "r");
    char m;
    while (1)
    {
        if (m == EOF)
        {
            break;
        }
        else
        {
            m = fgetc(ptr);
            printf("%c", m);
        }
    }
    printf("\n");

    return 0;
}