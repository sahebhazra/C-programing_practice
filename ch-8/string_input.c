#include<stdio.h>
#include<string.h>

int main(){
    char h[6];

    printf("Give input :");
    scanf("%s",h);
    printf("%s\n",h);
    

    printf("Give input :");
    scanf("%s",h);
    for (int i = 0; i < 6; i++){    
    printf("%c\n",h[i]);
    
    }
    
    return 0;
}