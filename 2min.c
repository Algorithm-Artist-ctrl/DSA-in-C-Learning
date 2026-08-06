#include<stdio.h>
int main()
{
    int a[] ={10,20,30,40,67,54,1,32,56,98,31,12,17,98,67};
    int n = sizeof(a);
    int i,min=a[0],sec_min;
    for(i=0;i<15;i++)
    {
        if (a[i]<min)
        {
            sec_min=min;
            min=a[i];
        }
        else if (a[i]<sec_min && a[i]!=min)
        {
            sec_min=a[i];
        }
    }
    printf("Minimum Element is %d ",min);
    printf("\nMinimum Element is %d ",sec_min);

}