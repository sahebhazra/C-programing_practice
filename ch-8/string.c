#include<stdio.h>
#include<string.h>

int main(){
    char name1[]="Samir";
    for (int i = 0; i < strlen(name1); i++)
    {
        printf("%c",name1[i]);    
    }
    printf("\n");
   
    
    char name2[]={'s','a','h','e','b','\0'};
    printf("%s\n",name2);

    char name3[]={'s','a','h','i','l','\0'};
     printf("%s\n",name3);
    
    char* name4="Ramesh";
    printf("%s\n",name4);



    
    return 0;
}