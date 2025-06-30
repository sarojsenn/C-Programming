//WAP to insert an element in an 1-D array.

#include<stdio.h>
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements of the array:");
  for(int i = 0; i< n; i++){
    scanf("%d", &arr[i]);
  }
  int insert;
  printf("Enter the element to insert:");
  scanf("%d", &insert);
  int location;
  printf("Enter the position where element to be inserted:");
  scanf("%d", &location);
  for(int i = n; i >= location; i--){
    arr[i] = arr[i-1];
  }
  arr[location-1] = insert;
  n++;
  printf("The resultant of the array: ");
  for(int i = 0; i< n; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}
