#include <stdio.h>
int main(){

        int length = 10;
        int width = 5;
        int area = length * width;
        int perimeter = 2 * (length + width);

        printf("Area: %d\n", area);
        printf("Perimeter: %d\n", perimeter);
        
        int fahrenheit = 98;
        int celsius = (fahrenheit - 32)/ 1.8;
        printf("%d°F = %d°C\n",fahrenheit,celsius);

        int minutes = 349;
        int hours = minutes / 60;
        int rminutes = 349 % 60;
        printf("%d minutes is equal to %d hours and %d minutes.\n",minutes, hours, rminutes);



        return 0;
        


}