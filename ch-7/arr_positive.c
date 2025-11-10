#include<stdio.h>
void check(int positive[]){
    int inti=0;
        for (int i = 0; i < 7; i++){
            // printf("%d\n",positive[i]);
            if (0<positive[i]){
                printf("%d\n",positive[i]);
                inti++;
            }   
        }
        printf("Total intigers in this array are %d\n",inti);
}
int main(){
    int arr[7]={12,-7,34,0,34,-2,25};
    check(arr);
    // printf("check\n");
    
    return 0;
}