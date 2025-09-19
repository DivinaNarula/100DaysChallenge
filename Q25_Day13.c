// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main() 
{
    char operator;
    int num1, num2;
    int result;
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    switch (operator) 
    {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;

        case '/':
            if (num2 == 0) 
            {
                printf("Error: Division by zero is not allowed.\n");
            } 
            else 
            {
                float divResult = (float)num1 / num2;
                printf("Result: %.2f\n", divResult);
            }
            break;

        case '%':
            if (num2 == 0) 
            {
                printf("Error: Modulus by zero is not allowed.\n");
            } 
            else 
            {
                result = num1 % num2;
                printf("Result: %d\n", result);
            }
            break;
            
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
