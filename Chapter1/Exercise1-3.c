#include <stdio.h>

/* print Farenheit to Celsius table from 0 .. 300 in steps of 20 */

int main() {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    printf("%3s %6s\n", "F", "C");
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    
    return 0;
}
