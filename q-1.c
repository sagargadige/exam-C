#include <stdio.h>

int main()
{
    int no1,no2;
    printf("Enter no1:");
    scanf("%d",&no1);
    printf("Enter no2:");
    scanf("%d",&no2);
    printf("\n-------------------------------------\n");
    printf("Addition of %d and %d is: %d\n",no1,no2,no1+no2);
    printf("Subtraction of %d and %d is: %d\n",no1,no2,no1-no2);
    printf("Multiplication of %d and %d is: %d\n",no1,no2,no1*no2);
    printf("Division of %d and %d is: %d",no1,no2,no1/no2);
    printf("\n-------------------------------------\n");
    return 0;
}