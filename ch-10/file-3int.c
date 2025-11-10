#include<stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen("hello1.txt","r");
    int i=0,num;

    while (i<3)
    {
        fscanf(ptr,"%d",&num);
        printf("%d\n",num);
        i++;
    }
    fclose(ptr);
    
    return 0;
}