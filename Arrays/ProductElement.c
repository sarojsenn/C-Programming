//WAP to find out the multiplication of the numbers stored in an array of integers.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        count = count * arr[i];
    }
    printf("Product of the array elements is: %d", count);
    return 0;
    
}
