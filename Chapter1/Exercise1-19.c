#include <stdio.h>
#define MAXLINE 1000

int getaline(char line[]);
void reverse(char line[], int end);
/* remove trailing tabs and blanks from lines */

int main() {
    int len;
    char line[MAXLINE];

    while((len = getaline(line)) > 0) {
        printf("Line length: %d\n", len);
        printf("Line: %s", line);
        reverse(line, len-1);
        printf("Reversed line: %s\n", line);
    }

    return 0;
}

int getaline(char line[]) {
    int c, i, j;

    for (i = 0; i < MAXLINE && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

void reverse(char line[], int end) {
    int beginning;
    char temp;
    beginning = 0;
    while (beginning < end) {
        temp = line[beginning];
        line[beginning] = line[end];
        line[end] = temp;
        ++beginning;
        --end;
    }
}
