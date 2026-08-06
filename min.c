#include <stdio.h>
int main()
{
    int a[10],i,min=0;
    printf("Enter Elements for array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d\n",&a[i]);

    }
    printf("\nArray is :");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]<min)
        {
            min= a[i];
        }
    }
    printf("\nMinimum Element in the least is %d ",min);
}