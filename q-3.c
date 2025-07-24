#include<stdio.h>
int main()
{
    int size,sum=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the value[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Your array is:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nArray in reverse order:");
    for (int i=size-1; i>=0; i--) {
        printf("%d ", a[i]);
        sum += a[i];
    }
    printf("\nThe sum of array is: %d",sum);
    printf("\n");
}