#include <stdio.h>

#define MAX_CHARACTERS 255

/* Histogram for any character in the sequence */
int main() {
    int c, i, j, characters[MAX_CHARACTERS];
    
    for (i = 0; i < MAX_CHARACTERS; i++) {
        characters[i] = 0;    
    }
    
    while ((c = getchar()) != EOF) {
        if (c >= 0 && c < MAX_CHARACTERS) {
            ++characters[c];
        }
    }
    
    printf("\nCharacter Histogram:\n");
    
    for (i = 0; i < MAX_CHARACTERS; i++) {
        if (characters[i] > 0) {
            printf("%3c: ", i);
            for(j = 0; j < characters[i]; j++) {
                putchar('-');
            }
            printf("\n");
        }
    }
    
    return 0;
}
