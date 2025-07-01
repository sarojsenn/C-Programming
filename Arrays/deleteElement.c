//WAP to delete an element at desired position from an array.

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
    int delete;
    printf("Enter position where to delete: ");
    scanf("%d", &delete);
    for (int i = delete-1; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    printf("The new array will be: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
