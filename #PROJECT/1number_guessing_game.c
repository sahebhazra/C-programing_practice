#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempt = 0;
    srand(time(0));
    number = rand() % 100 + 1;  // Random number between 1 to 100

    printf("Guess the number between 1 and 100:\n");

    while (number!=guess) {
        scanf("%d", &guess);
        attempt++;

        if (number > guess)
            printf("Higher number please\n");
        else if (number < guess)
            printf("Lower number please\n");
        else {
            printf("🎉 You win at attempt number %d!\n", attempt);
        }
    }

    return 0;
}
