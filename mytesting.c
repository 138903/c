#include <stdio.h>
// int main or whatever in front of int is ALWAYS your first function for the program to even function.
/*
int main() {
    char myGrade = 'A';
    printf("%c is my grade\n", myGrade);
    return 0;
}
*/
// The %c specifies that the variable that is %c is a character and the
// ,"variable name" says that the %c is whatever myGrade is

void sigma() {
  char myText[] = "Hello";
  printf("%s\n", myText);
  printf("%c\n", myText[0]);
  printf("%c\n", myText[1]);
  printf("%c\n", myText[2]);
  printf("%c\n", myText[3]);
  printf("%c\n", myText[4]); 
}
// void makes it so you don't need to return anything for the function to function.
int main() {
    int myNum = 15;
    int myOtherNum = 20;

    myNum = myOtherNum;
    printf("%d\n", myNum);
    sigma();
}

int main() {
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

