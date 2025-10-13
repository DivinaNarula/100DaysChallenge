// Write a program to check if a number is a strong number.

#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
int main() {
    int n, temp, digit, sum = 0;
    scanf("%d", &n);
    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if(sum == n)
        printf("Strong number");
    else
        printf("Not strong number");
    return 0;
}