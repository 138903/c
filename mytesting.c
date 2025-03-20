#include <stdio.h>
#include <stdbool.h>
// int main or whatever in front of int is ALWAYS your first function for the program to even function.
/*
int main() {
    char myGrade = 'A';
    printf("%c is my grade\n", myGrade);
    return 0;
}
*/

// The %c specifies that the variable that is %c a character and the
// ,"variable name" says that the %c is whatever myGrade is
/*
void sigma() {
  char myText[] = "Hello";
  printf("%s\n", myText);
  printf("%c\n", myText[0]);
  printf("%c\n", myText[1]);
  printf("%c\n", myText[2]);
  printf("%c\n", myText[3]);
  printf("%c\n", myText[4]); 
}

void bleh() {
  int num1 = 5;
  int num2 = 2;
  float sum = (float) num1 / num2;
  printf("%.1f\n", sum);
  return;
}

void crack() {
  int x = 5;
  int y = 10;
  printf("%i\n", x < y);
}
*/
/*
int cost_function() {
  // Create variables of different data types
  int items = 50;
  float cost_per_item = 9.99;
  float total_cost = items * cost_per_item;
  char currency = '$';

  // Print variables
  printf("Number of items: %i\n", items);
  printf("Cost per item: %.2f %c\n", cost_per_item, currency);
  printf("Total cost = %.2f %c\n", total_cost, currency);
  return 0;
}
*/
int even_odd_function() {
  int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is even. \n", num);
    else
        printf("%d is odd. \n", num);

    return 0;
}

int main() {
  int myNum = 15;
  int myOtherNum = 20;

  myNum = myOtherNum;
  printf("%d\n", myNum);
  even_odd_function();
}



// void makes it so you don't need to return anything for the function to function.



