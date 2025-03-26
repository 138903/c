#include <stdio.h>
#include <math.h>

int main() {
    int number1, number2;
    int result;
    char operator;
    
    printf("Enter an operator (+, -, x, /) If you would like to do logarithms type log: ");
    scanf(" %c", &operator);

    printf("Enter first number (integer only): ");
    scanf("%i" , &number1);

    printf("Enter second number (integer only): ");
    scanf("%i" , &number2);

    switch (operator) {
        case '+':
        result = number1 + number2;
            printf("Result: %i\n", result);
            break;
        case '-':
            result = number1 - number2;
            printf("Result: %i\n", result);
            break;
        case 'x':
        case '*':
            result = number1 * number2;
            printf("Result: %i\n", result);
            break;
        case '/':
            if (number2 == 0) {
                printf("Error: Dividing by zero");
            } else {
                printf("Result is around: %.2i\n", number1 / number2);
            }
            break;
        default: 
            printf("Invalid operator.\n");    
    }

    return 0;
}

int log() {

}