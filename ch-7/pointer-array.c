#include<stdio.h>
int main(){
    int a[]={34,23};
    int* b=&a;

    int x=34;
    int* y=&x;
                    //section of a,b
    printf("the value of array-a[0] in pointer-b is %d\n",*b); // *b hade value of a[0]
    b++;         // + 4byte/+1-step in memory location
    printf("the value of array-a[1] in pointer-b is now %d\n",*b); // *b hade value of a[1]

    printf("the address of array a[0] is %p\n",&a[0]);
    printf("the address of array a[1] is %p\n",&a[1]);

    printf("\n");

                    //section of x,y
    printf("the address of x in point-y is %p\n",y);
    y++;   // shift the x-variable value at +4 byte location
    printf("the address of x in point-y is %p\n",y);
    return 0;
}