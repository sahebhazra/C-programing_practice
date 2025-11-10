#include <stdio.h>

void reverse(int ant[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = ant[i];
        ant[i] = ant[n - i - 1];
        ant[n - i - 1] = temp;

        printf("Swapped: %d <--> %d\n", ant[i], ant[n - i - 1]);
    }
}

int main() {
    int num[] = {11, 23, 34, 45, 56, 78};
    int n = 6;

    reverse(num, n);

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
