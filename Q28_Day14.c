// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main() 
{
    int n, i;
    unsigned long long product = 1; 
    int even = 0; 
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n < 2) 
    {
        printf("No even numbers in the given range\n");
        return 0;
    }
    for (i = 2; i <= n; i += 2) 
    {
        product *= i;
        even = 1;
    }
    if (even)
        printf("Product of even numbers from 1 to %d is: %llu\n", n, product);
    else
        printf("No even numbers found in the range\n");
    return 0;
}
