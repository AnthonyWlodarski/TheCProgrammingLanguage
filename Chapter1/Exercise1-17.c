#include <stdio.h>
#define MAXLINE 1000

int getaline(char line[], int maxline);

/* print the size of arbitrary long lines > 80 characters */

int main() {
    int len;
    char line[MAXLINE];

    while((len = getaline(line, MAXLINE)) > 0) {
        if (len >= 80) {
            printf("Line: %s\n", line);
        }
    }

    return 0;
}

int getaline(char line[], int maxline) {
    int c, i;

    for (i = 0; i < maxline && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}
