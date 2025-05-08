#include <stdio.h>

int main(){
    int number;
    int exponent;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    int i = 1;
    int result = number;

    while(i <= exponent - 1){
        result = result * number;
        ++i;
    }
    printf("%d\n", result);
}