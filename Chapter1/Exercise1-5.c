#include <stdio.h>

/* print Farenheit to Celsius table from 300 .. 0 in steps of 20 */

int main() {
    int fahr, celsius;

    printf("%3s %6s\n", "F", "C");
    
    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32.0));
    }
    
    return 0;
}
