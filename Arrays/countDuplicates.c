// WAP to Count the total number of duplicate elements in an array.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //Bubble Sort
    for (int turns = 0; turns < n; turns++)
    {
        for (int j = 0; j < n-turns-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] == arr[i-1]){
            count++;
        }
    }
    printf("%d", count);
    
}
