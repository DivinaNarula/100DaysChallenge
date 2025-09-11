// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() 
{
    double costPrice, sellingPrice;
    double amount, percentage;
    printf("Enter Cost Price: ");
    if (scanf("%lf", &costPrice) != 1) 
    {
        printf("Invalid input for cost price.\n");
        return 1;
    }

    printf("Enter Selling Price: ");
    if (scanf("%lf", &sellingPrice) != 1) 
    {
        printf("Invalid input for selling price.\n");
        return 1;
    }

    if (sellingPrice > costPrice) 
    {
        amount = sellingPrice - costPrice;
        percentage = (amount / costPrice) * 100;
        printf("Profit: %.2f (%.2f%%)\n", amount, percentage);
    } 
    else if (costPrice > sellingPrice) 
    {
        amount = costPrice - sellingPrice;
        percentage = (amount / costPrice) * 100;
        printf("Loss: %.2f (%.2f%%)\n", amount, percentage);
    } 
    else 
    {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}