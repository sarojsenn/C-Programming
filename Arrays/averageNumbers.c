// WAP to find the average of N numbers using arrays.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the number of elements in the array: ");
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    float avg = sum/n;
    printf("The average of the numbers is: %f", avg);
}
