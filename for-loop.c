//Print numbers from 1 to 10
#include <stdio.h>

//Example
int main (){
    /*int i;
    
    for (i = 1; i < 11; ++i)
    {
        printf("%d", i);
        }
    return 0;*/

    //Exercise 1
    int n;
    printf("Enter a positive number: ");
    scanf ("%d", &n);

    int i;
    int sum = 0;
    for (i = 1; i < n + 1; ++i){
        sum = sum + i;
  }
  printf("%d\n", sum);

  //Excercise 2
  int s;
  printf("Enter a number: ");
  scanf("%d", &s);

  int f;
  int multiplication = 1;
  for (f = 1; f < s + 1 ; ++f){
    multiplication = multiplication * f;
  }
  printf("%d\n", multiplication);

}
