#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 40, 50}; 
    int value,pos;
    printf("Enter value to insert an element \n");
    scanf("%d",&value);
    printf("Enter Position to insert an element \n");
    scanf("%d",&pos);
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
   for(int i=9;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    printf("\nchanged array");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}