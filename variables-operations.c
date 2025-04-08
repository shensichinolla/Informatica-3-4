#include <stdio.h>
int main(){
        //rectangle
         int length;
        int width;
        printf("Enter the rectangle length: ");
        scanf("%d", &length);
        printf("Enter thhe rectangle width: ");
        scanf("%d", &width);
        int area = length * width;
        int perimeter = 2 * (length + width);

        printf("Area: %d\n", area);
        printf("Perimeter: %d\n", perimeter);
        
        //temperature
        int fahrenheit;
        printf("Enter the temprature in fahrenheit: ");
        scanf("%d", &fahrenheit);
        int celsius = (fahrenheit - 32)/ 1.8;
        printf("%d°F = %d°C\n",fahrenheit,celsius);

        int minutes = 349;
        int hours = minutes / 60;
        int rminutes = 349 % 60;
        printf("%d minutes is equal to %d hours and %d minutes.\n",minutes, hours, rminutes);

        
        
        return 0;
        


}