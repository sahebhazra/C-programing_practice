#include<stdio.h>
void func(int*);

void func(int* x){
    printf("the address of a is %p\n",x);

}
int main(){
    int i=3;
    printf("the address of a is %p\n",&i);
    func(&i);

    return 0;
}