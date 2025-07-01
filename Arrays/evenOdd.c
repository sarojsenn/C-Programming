#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The even numbers are: ");
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0){
            printf("%d ", arr[i]);
        }
    }
    printf("The odd numbers are: ");
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
    
}
