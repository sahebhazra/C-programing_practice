#include <stdio.h>
int reverse(int ant[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = ant[i];
        ant[i] = ant[n - i - 1];
        ant[n - i - 1] = temp;
    }
    return 0;
}

int main()
{
    int a, num[] = {11, 23, 34, 45, 56, 78};
    int n = 6;

    reverse(num, n);
    printf("the reverse num[] is :\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");


    return 0;
}