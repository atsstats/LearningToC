#include <stdio.h>

int main(){

    // variable = a reusable container for a value
    //              Behaves as if it were the value it contains

    int age = 23;
    int year = 2026;
    int quantity = 1;
    float wear = 0.99914;
    float price = 35.99;
    float temperature = -10.1;
    double pi = 3.14159265358979;
    double e = 2.7182818284590;
    char grade = 'A';
    char symbol = '!';
    char currency = '$';
    char name[] = "atsstats";

    printf("you are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %dx items\n", quantity);
    printf("Dragonlore has wear %f\n", wear);
    printf("The price is $%f\n", price);
    printf("The temperature is %fF\n", temperature);
    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);
    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);
    printf("Hello %s\n", name);
    
    return 0;
}

// stopped at 0011 5MAR2026 - video at 28min