#include <stdio.h>
#include <stdbool.h>


int main(){

/*      variable = a reusable container for a value and Behaves as if it were the value it contains
        int = whole numbers (4 bytes in modern systems)
        float = single-precision decimal number (4 bytes)
        double = double-precision decimal number (8 bytes)
        char = single character (1 byte)
        char[] = array of characters (variable size)
        bool = true or false (1 byte, requires <stdbool.h>)
*/

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
    char food[] = "shaghetti and pizza";
    char email[] = "fake123@gmail.com";
    
    
    bool isOnline = true;
    bool isStudent = false;
    bool forSale = true;


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
    printf("your favorite food is %s\n", food);
    printf("your email is %s\n", email);

    printf("%d\n", isOnline);

    if(isOnline){
        printf("You are ONLINE");
    }
    else{
        printf("You are OFFLINE");
    }
    
    if(isStudent){
        printf("You are a student");
    }
    else{
        printf("You are not a student");
    }
    
    if(forSale){
        printf("This is for $%.2f", price);
    }
    else{
        printf("This is not for sale");
    }


    return 0;
}