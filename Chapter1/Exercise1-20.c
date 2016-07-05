#include <stdio.h>

#define TABWIDTH 4
#define MAXLINE 250
#define MAXTABLINE 1000

int getaline(char line[]);
void detab(char line[], char detabbedLine[], int end);

int main() {
    int len;
    char line[MAXLINE];
    char detabbedLine[MAXTABLINE];
    
    while((len = getaline(line)) > 0) {
        printf("Line length: %d\n", len);
        printf("Line: %s\n", line);
        detab(line, detabbedLine, len-1);
        printf("Detabbed line: %s\n", detabbedLine);
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

void detab(char line[], char detabbedLine[], int end) {
    int i, beginning, beginningTabbed;
    char temp;
    beginning = beginningTabbed = 0;
    while (beginning < end) {
        temp = line[beginning];
        if (temp == '\t') {
            for (i = 0; i < TABWIDTH; ++i) {
                detabbedLine[beginningTabbed++] = '.';
            }
        } else {
            detabbedLine[beginningTabbed++] = temp;
        }
        ++beginning;
    }

    while (beginningTabbed < MAXTABLINE) {
        detabbedLine[beginningTabbed++] = '\0';
    }
}
