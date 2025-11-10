#include <stdio.h>
#include <string.h>

int main() {
    char h[6];

    printf("Give input: ");
    scanf("%s", h);
    printf("You entered: %s\n", h);

    // Clear input buffer
     getchar(); // Removes the leftover newline character

    printf("Enter characters:\n");
    for (int i = 0; i < strlen(h); i++) {
        scanf("%c", &h[i]);
        printf("Char %d: %c\n", i + 1, h[i]);
    }
    

    return 0;
}
