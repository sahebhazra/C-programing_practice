#include <stdio.h>
#include<string.h>

int main()
{
            // STRLEN()
    char A[30] = "hello how are you?";
    printf("%s\n", A);
    puts(A);
    int j = strlen(A); 
    printf("The length of the char-A is %d\n", j);

            printf("\n");

               // STRCPY()
    char b[10] = "hello";
    char c[10];
    strcpy(c,b);         
    printf("The char-b is copy in char-c %s\n", c);

            
            printf("\n");
            // STRCAT()
    char d[10] = "hello";
    char e[10]= "world";
    strcat(d,e);         
    printf("char-d %s\n", d);       //The char-e contain with char-d


             printf("\n");

            // STRCMP()
    char f[10] = "saheb";
    char g[10]= "saheb";
    char h[10]= "doog";
    int k=strcmp(f,g);         
    printf("result of compear %d\n", k);       //return 0 because both value are same

     int l=strcmp(f,h);         
    printf("result of compear %d\n", l);     //return +(value) because f come last


     int m=strcmp(h,f);         
    printf("result of compear %d\n", m);     //return -(value) because h come first

    return 0;
}