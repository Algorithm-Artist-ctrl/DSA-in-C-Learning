#include<stdio.h>
int main()
{
     int arr[5] = {10, 20, 100, 40, 50};
     int max=arr[0],second=arr[0],i;
     for (i=0;i<5;i++)
     {
        if (arr[i]>max)
        {
            second=max;
            max=arr[i];
        }
        else if (arr[i]>second && arr[i]!=max)
        {
            second=arr[i];
        }
     }
    printf("Maximum Element in array is %d\n",max);
    printf(" Second Maximum Element in array is %d\n",second);
}