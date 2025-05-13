#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int times;
    int i;
    printf("How many times do you want to roll the dice?: ");
    scanf("%d", &times);
    
    srand(time(NULL));
    for (i = 1; i <= times; i++){
        int result = (rand() % 6) + 1;
        printf("Roll %d: %d\n", i, result);
    }
    
    return 0;
}