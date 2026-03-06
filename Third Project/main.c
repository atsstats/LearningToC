#include <stdio.h>

// Format Specifier = Special tokens that begin with a % symbol followed by a character that specifies the data type and optional modifiers(width, precision, flags). 
//                      They control how data is displayed or interpreted.


int main() {

    int age = 23;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Atsstats";

    printf("%d\n", age);
    printf("%.2f\n", price);
    printf("%lf\n", pi);







    return 0;
}