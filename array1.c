#include <stdio.h>

int main(void)
{
    int a[10], i;

    printf("Enter the element of array\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Element of Array is\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}