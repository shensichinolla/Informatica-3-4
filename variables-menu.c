#include <stdio.h>
int main () {

    char snack1[] = "chocolate";
    char snack2[] = "ruffles";
    char snack3[] = "soda";
    float price1 = 12.50;
    float price2 = 20.22;
    float price3 = 17.85;
    int stock1 = 13;
    int stock2 = 20;
    int stock3 = 50;


    printf("Welcome to the Snack Shop!\n");
    printf("-----------------------------\n");
    printf("1. %s - $%.2f - %d Available\n", snack1, price1, stock1);
    printf("2. %s - $%.2f - %d Available\n", snack2, price2, stock2);
    printf("3. %s - $%2.f - %d Available\n", snack3, price3, stock3);
 
    return 0;

}