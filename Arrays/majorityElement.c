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
    int majority = -1;
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
        if (count > n/2)
        {
            majority = arr[i];
            break;
        }
        
    }
    if (majority != -1)
    {
        printf("The majority element is: %d", majority);
    }
    else
    {
        printf("Majority element not found");
    }
    return 0;
    
}
