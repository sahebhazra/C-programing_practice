#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr;
    ptr=(int*)calloc(5,sizeof(int));
    int x= 5*sizeof(int);
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i*2;
        printf("%d\n", ptr[i]);
        printf("\t%u\n", &ptr[i]);
    }
    
    free(ptr);
    printf("the memory allocated in ptr%d\n",x);
    
    return 0;
}