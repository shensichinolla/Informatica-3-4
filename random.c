#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int times;
    printf("How many times do you want to roll the dice?: ");
    scanf("%d", &times);
    
    srand(time(NULL));
    int diceRoll = (rand() % 6) + 1; // Generates a number between 1 and 6
    printf("You rolled a: %d\n", diceRoll);
    return 0;
}