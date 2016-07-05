#include <stdio.h>

/* print Celsius to Fahrenheit table from 0 .. 300 in steps of 20 */

int main() {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    printf("%3s %6s\n", "C", "F");
    
    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius / (5.0/9.0)) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
    return 0;
}
