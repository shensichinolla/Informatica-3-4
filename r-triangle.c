#include <stdio.h>

int main(){
    int rows;
    printf("Enter a number: ");
    scanf("%d", &rows);

    for( int x = 1; x <= rows; x++){
        for(int y = 1; y <= x; y++){
            printf("*");
        }
        printf("\n");
    }


}