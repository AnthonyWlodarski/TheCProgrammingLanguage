#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_LENGTH 15

/* Histogram for words up to nine characters */

int main() {
    int i, j, c, length, state, histogram[MAX_LENGTH];
    
    for (i = 0; i < MAX_LENGTH; i++) {
        histogram[i] = 0;
    }
    
    state = OUT;
    length = 0;
    while ((c = getchar()) != EOF) {        
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (length < MAX_LENGTH) {
                ++histogram[length];
            } else {
                ++histogram[0];
            }
            length = 0;
        } else if (state == OUT) {
            state = IN;
            ++length;
        } else {
            ++length;
        }
    }
    
    printf("\nHistogram:\n");
    
    for (i = 1; i < MAX_LENGTH; i++) {
        length = histogram[i];
        printf("%d:%3d   ",i, length);
        
        for(j = 0; j < length; j++) {
            putchar('-');
        }
        
        printf("\n");
    }
    
    printf(">15: %d\n", histogram[0]);
    
    return 0;
}
