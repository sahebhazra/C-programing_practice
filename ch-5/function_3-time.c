#include<stdio.h>
void g_m();
void g_a_n();
void g_n();

void g_m(){
    printf("good morning!\n");
}
void g_a_n(){
    printf("good after noon!\n");
}
void g_n(){
    printf("good night!\n");
}

int main(){
    g_m();
    g_a_n();
    g_n();

    return 0;
}