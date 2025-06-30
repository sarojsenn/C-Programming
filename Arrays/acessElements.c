// WAP to create an array that can store N integers and display the contents of the array

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array contents are:");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}
