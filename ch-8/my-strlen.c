#include <stdio.h>
int slength(char x[])
{
    int count = 1;
    for (int i = 0; i < count; i++)
    {
        if (x[i] != '\0')
        {
            count++;
        }
    }
    return count - 1;
}
int main()
{
    char sa[] = "saheb";
    printf("the lenght of char-'sh' is %d\n", slength(sa));

    return 0;
}