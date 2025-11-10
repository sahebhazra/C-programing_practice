#include<stdio.h>
#include<string.h>

int chech(char x[]){
    int count = 0;
    for (int i = 0; i < strlen(x); i++){
        if(x[i]=='a'){
        count++;
        }
    }
    return count;
    
}

int main(){
    char name[]="saheb";
    int p=chech(name);
    printf("%d\n",p);
    
    return 0;
}