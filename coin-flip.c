#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int coinflip;
    srand(time(NULL));

    coinflip= (rand() % (2 + 1));
    

    if(coinflip == 1) 
    printf("The coinflip is Heads\n");
    if(coinflip == 2) 
    printf("The coinflip is Tails\n");
    int guess;
    int heads = 1
    int tais = 2

    if(guess == 1 && coinflip == 1){
        printf("The coinflip was heads and your guess was heads so you were right");
    }else(guess == 2 && coinflip == 2){
        printf()
    }


    

}