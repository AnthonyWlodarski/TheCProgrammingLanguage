#include <stdio.h>

int main() {
    int c;
    
    c = getchar() != EOF;
    
    printf("The character from the test %d.\n", c);
    
    return 0;
}
