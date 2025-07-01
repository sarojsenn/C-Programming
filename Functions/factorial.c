#include<stdio.h>
int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factorial of the number is: %d", factorial(n));
    return 0;
}
