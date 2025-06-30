//WAP to find out the sum of the N numbers stored in an array of integers.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:");
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0; i< n; i++){
        sum += arr[i];
    }
    printf("The sum of the elemnts is: %d", sum);
    return 0;
}
