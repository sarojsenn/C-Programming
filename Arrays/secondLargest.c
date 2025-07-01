//WAP to find the second largest element in an array

#include<stdio.h>
int secondLargest(int arr[], int n){
    int max = arr[0];
    int max2 = -1;
    if(n == 1){
        return -1;
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
        else if(arr[i] < max && arr[i] != max2){
            max2 = arr[i];
        }
    }
    return max2;
}
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
    printf("The second largest number is: %d", secondLargest(arr,n));
    return 0;
}
