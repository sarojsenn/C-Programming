// WAP to search an element in an 1-D array

#include<stdio.h>
int search(int arr[], int n, int target){
    for(int i = 0; i< n; i++){
        if (arr[i] == target)
        {
            return i;
        }  
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);
    int ans = search(arr,n, target);
    if(ans == -1){
        printf("Element not found");
    }
    else{
        printf("Element found at index %d", ans+1);
    }
    return 0;
}
