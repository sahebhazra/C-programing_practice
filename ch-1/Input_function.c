#include <stdio.h>
int main()
{
    int a;
    float b;
    char c= 'g';

    printf(" value of \"a\" is: ");
    scanf("%d", &a);

 printf(" value of \"b\" is: ");
 scanf("%f", &b);

    printf("a+b is %.2f\n", a+b);
     printf("a-b is %.2f\n", a-b);
      printf("a*b is %.2f\n", a*b);
       printf("a/b is %.2f\n", a/b);
       
       printf("%c",c);
    
    return 0;
}