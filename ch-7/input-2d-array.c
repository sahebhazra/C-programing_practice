#include<stdio.h>
int main(){
    int a[3][2];
    
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter the value of a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }      
    }


                //optin 1 for print
    for (int i = 0; i < 3; i++) {
    
        printf("The row %d is %d %d\n", i, a[i][0], a[i][1]);
                         //OR
        //printf("a[%d][0] = %d, a[%d][1] = %d\n", i, a[i][0], i, a[i][1]);
    
    }


                        //optin 2 for print
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //             printf("the  a[%d][%d] is %d %d\n",i,j,a[i][j],a[i+1][j+1]);
    //     }
        
    // }

    
    return 0;   
}