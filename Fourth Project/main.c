#include <stdio.h>

int main() {

    //arithmetic operators = + - * / % ++ --

    int x = 10;
    int y = 3;
    int z = 0;

    float a = 21;
    float b = 8;
    float c = 0;
    
    z = x + y;
    
    printf("%d\n", z);
    
    z = x - y;
    
    printf("%d\n", z);

    z = x * y;
    
    printf("%d\n", z);

    z = x / y;
    printf("%d\n", z);

    c = a / b;
    printf("%f\n", c);

    z = x % y;
    printf("%d\n", z);

    a++;
    printf("%f\n", a);

    a--;
    printf("%f\n", a);

    x+=2;
    printf("%d\n", x);





    return 0;
}