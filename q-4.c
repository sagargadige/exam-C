#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int a[size];
    
    for(int i = 0; i < size; i++)
    {
        printf("Enter the value[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\n-------------------------------------\n");
    printf("Your array is: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n-------------------------------------\n");
    printf("Your cube array is: ");
    for(int i = 0; i < size; i++)
    {
        int cube = a[i] * a[i] * a[i];
        printf("%d ", cube);
    }
    printf("\n-------------------------------------\n");

    return 0;
}