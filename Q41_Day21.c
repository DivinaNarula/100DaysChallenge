//Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>
int main() {
    int n, first, last, digits, power, middle;
    scanf("%d", &n);
    last = n % 10;
    digits = (int)log10(n);
    power = pow(10, digits);
    first = n / power;
    middle = n % power;
    middle = middle / 10;
    int swapped = last * power + middle * 10 + first;
    printf("%d", swapped);
    return 0;
}