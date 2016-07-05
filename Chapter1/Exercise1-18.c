#include <stdio.h>
#define MAXLINE 1000

int getaline(char line[], int maxline);

/* remove trailing tabs and blanks from lines */

int main() {
    int len;
    char line[MAXLINE];

    while((len = getaline(line, MAXLINE)) > 0) {
        printf("Line: %s|\n", line);
    }

    return 0;
}

int getaline(char line[], int maxline) {
    int c, i, j;

    for (i = 0; i < maxline && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    
    for (j = i; j >= 0; j--) {
        if (line[j] != '\0' && line[j] != '\n' && line[j] != '\t' && line[j] != ' ') {
            j = 0;
        } else if (line[j] == '\t' || line[j] == ' ') {
            line[j] = '\0';
        }
    }
    
    return i;
}
