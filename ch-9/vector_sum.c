#include <stdio.h>

typedef struct vector2d
{
    float x;
    float y;
} vec;

void tack_show(vec v[]){
    for (int i = 0; i < 2 ;i++)
    {
        printf("enter the value of x position for vector[%d]: \n",i+1);
        scanf("%f",&v[i].x);
        printf("enter the value of y position : \n");
        scanf("%f",&v[i].y);
        printf("vector[%d] x and y are :  %.2f %.2f\n",i+1 ,v[i].x, v[i].y);
    }
}

void sum(vec a,vec b){
    vec v3;
     v3.x = a.x + b.x;
     v3.y = a.y + b.y;
     printf("Sum Vector: (%.2f, %.2f)\n", v3.x, v3.y);
}

int main()
{
    vec v[2];
    tack_show(v);
    sum(v[0],v[1]);
    
    return 0;
}