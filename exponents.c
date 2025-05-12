#include <stdio.h>
#include <math.h>

/*int main(){
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
}*/

int main(){
    int base;
    int exponent1;

    printf("Enter a base: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exponent1);

    int result= pow(base, exponent1);
    printf("Power of %d\n", result);

}