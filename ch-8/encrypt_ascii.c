#include <stdio.h>
#include <string.h>

int main()
{
    char wordcode[] = "hello bro";
    for (int i = 0; i < strlen(wordcode); i++)
    {
        wordcode[i] +=2;
        
    }

    printf("%s\n", wordcode);

    return 0;
}