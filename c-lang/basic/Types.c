#include <stdio.h>

int main(){
    printf("Hello World!\n\n");

    /* Formula for calculating ranges
    * signed numbers: -2^(n - 1) ~ 2^(n-1) - 1
    * unsigned numbers: 2^n - 1 
    */

    /* integer types
    * int (2 or 4 bytes)
    * unsigned int 
    * short (2 bytes)
    * unsigned short 
    * long (8 bytes)
    * unsigned long
    */
    unsigned int num1 = -10;
    int num2 = -100;
    unsigned long num3 = 41097840918408101LU; //use LU after unsigned long literal
    long num4 = -14410894012941L;
    unsigned short num5 = -15890;
    short num6 = -134;

    printf("unsigned int:%u\nint:%d\nunsigned long:%lu\nlong:%ld\nunsigned short:%d\nshort:%d\n\n", num1, num2, num3, num4, num5, num6);

    //floating point types
    double x = 1041.452527; //pretty much always use double
    float x2 = 104.3F;

    long double z = 1048104.415; //long double is not standard
    printf("double:%f\nfloat:%f\n\n", x, x2);

    //char types
    char character = 116;
    unsigned char character2 = -25;
    printf("char: %c\n\n", character);

    //enum types are treated as integers once the program is compiled

    //note: names aren't kept in memory, only data is

    return 0;
}