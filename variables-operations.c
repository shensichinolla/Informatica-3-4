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

        //time
        int minutes;
        printf("Enter the number of minutes: ");
        scanf("%d,", &minutes);
        int hours = minutes / 60;
        int rminutes = minutes % 60;
        printf("%d minutes is equal to %d hours and %d minutes.\n",minutes, hours, rminutes);

        //circle
        const float PI = 3.1416;
        int radio;
        int areac;
        printf("Enter the circle radio: ");
        scanf("%d", &radio);
        areac = PI * (radio * radio);
        printf("The area of the circle is: %d\n", areac);
        

        
        return 0;
        


}