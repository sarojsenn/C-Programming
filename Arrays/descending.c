#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (int m = 0; m < n; m++)
    {
        scanf("%d", &arr[m]);
    }
    for (int i = 0; i < n-1; i++)
    {
        int pos = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[pos] < arr[j])
            {
                pos = j;
            }
        }
        int temp = arr[pos];
        arr[pos] = arr[i];
        arr[i] = temp;
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}
