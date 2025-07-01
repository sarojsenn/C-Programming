#include<stdio.h>
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
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
    int d;
     printf("Enter number of positions to rotate: ");
    scanf("%d", &d);
    d = d % n;
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
    printf("Array after left rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;


}
