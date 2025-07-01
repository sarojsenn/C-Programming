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
    //insertion sort
    // for(int turns = 0; turns < n; turns++){
    //     for (int j = 0; j < n-1-turns; j++)
    //     {
    //         if (arr[j] > arr[j+1])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
            
    //     }
        
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != arr[i-1])
    //     {
    //         printf("%d ", arr[i]);
    //     }
        
    // }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            
        }
        if (count == 1)
        {
            printf("%d ", arr[i]);
        }
        
    }
    
    return 0;
}
