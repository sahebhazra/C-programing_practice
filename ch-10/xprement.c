#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt", "w");
    int a = 50;
    if( fprintf(ptr, "%d", a)){
        printf("Operation is done!\n");
    }
    else{
        printf("therre's an error");
    }
   
    fclose(ptr);

    return 0;
}