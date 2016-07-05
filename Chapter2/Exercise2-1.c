#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Ranges of char, short, int, and long variables both signed and unsigned\n");
    printf("using standard headers.\n");

    printf("Ranges for a signed char %d to %d\n", SCHAR_MIN, SCHAR_MAX);  
    printf("Ranges for a unsigned char %d\n", UCHAR_MAX);  
    printf("Ranges for a signed short %d to %d\n", SHRT_MIN, SHRT_MAX);  
    printf("Ranges for a unsigned short %d\n", USHRT_MAX);  
    printf("Ranges for a signed int %d to %d\n", INT_MIN, INT_MAX);  
    printf("Ranges for a unsigned int %u\n", UINT_MAX);  
    printf("Ranges for a signed long %ld to %ld\n", LONG_MIN, LONG_MAX);  
    printf("Ranges for a signed long %ld to %ld\n", LONG_MIN, LONG_MAX);  
    printf("Ranges for a float %f to %f \n", FLT_MIN, FLT_MAX);  
    printf("Ranges for a double %f to %f \n", DBL_MIN, DBL_MAX);  
    
    return 0;
}
