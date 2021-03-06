#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, state;
    
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' && state != IN) {
            printf("%d\n", c);
            state = IN;
        }
        
        if (c != ' ') {
            printf("%d\n", c);
            state = OUT;
        }    
    }

    return 0;
}
