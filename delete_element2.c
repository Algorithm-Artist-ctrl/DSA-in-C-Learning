#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 100, 40, 50}; 
    int value,pos;
    printf("Enter element to delete \n");
    scanf("%d",&value);
    for(int i = 0; i < 10; i++) {
        if(arr[i]==value)
        {
            pos=i+1;
            break;
        }
    }
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
   for(int i=pos-1;i<10-1;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("\nchanged array\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}