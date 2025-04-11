#include <stdio.h>

int main(){
    // Excersice 1
    int num1;
    int num2;
    printf("Please enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1 == num2){
        printf("%d is equal to %d \n", num1, num2);
    } else {
        printf("%d is NOT equal to %d \n", num1, num2);
    }
   
    //Excersice 2
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0){
        printf("%d is an even number", number);
    } else {
        printf("%d is not an even number \n", number);
    }

    //Excersice 3
    int day;
    printf("\nEnter any number from 1-7: ");
    scanf("%d", &day);
    if (day == 1){
        printf("\nIts Sunday");
    }
    else if (day == 2){
        printf("\nIts Monday");
    }
    else if (day == 3){
        printf("\nIts Wednesday");
    }
    else if (day == 4){
        printf("\nIts Thursday");
    }
    else if (day == 5){
        printf("\nIts Friday");
    }
    else if (day == 7){
        printf("Its Saturday\n");
    }

    //Exercise 4
    int number1;
    int number2;
    printf("\nPlease enter two numbers: ");
    scanf(" %d %d", &number1, &number2);
    int addition = number1 + number2;
    int subtraction = number1 - number2;
    int multiplication = number1 * number2;
    int division = number1 / number2;
    int operation;
    printf("What operation?: ");
    scanf("%d", &operation);
    if (operation == addition){
        printf("number1 + number2");
    }

    return 0;
}