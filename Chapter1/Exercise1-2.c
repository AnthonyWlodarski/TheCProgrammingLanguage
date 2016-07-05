#include <stdio.h>

int main() {
    printf("\nHello, World!\n");
    printf("\tHello, World!\n");
    printf("\bHello, World!\n");
    printf("\"Hello, World!\n");
    printf("\\Hello, World!\n");
    //printf("\cHello, World!\n");
    
    return 0;
}

/*
anthony@vb-ubuntu:~/TheCProgrammingLanguage/Chapter1$ gcc Exercise1-2.c -o Exercise1-2
Exercise1-2.c: In function ‘main’:
Exercise1-2.c:9:16: warning: unknown escape sequence: '\c'
         printf("\cHello, World!\n");
                ^
*/
