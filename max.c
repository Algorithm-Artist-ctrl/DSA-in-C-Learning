#include<stdio.h>
void main()
{
     int arr[5] = {10, 20, 100, 40, 50};
     int max=arr[0],i;
     for (i=0;i<5;i++)
     {
        if (arr[i]>max)
        {
            max=arr[i];
        }
     }
    printf("Maximum Element in array is %d\n",max);
}