#include <stdio.h>

float fToC(float f);

int main() {
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    while (lower <= upper) {
        printf("%3d %6.1f\n", lower, fToC(lower));
        lower = lower + 20;
    }

    return 0;
}

float fToC(float f) {
    return (5.0/9.0) * (f - 32.0);
}
