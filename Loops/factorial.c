#include<stdio.h>
int main(){
    int n;
    int fact = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    // for(int i = 1; i<=n; i++)
    for(int i = n; i>=1; i--)
    {
        fact = fact * i;

    }
    printf("Factorial of %d = %d " , n ,  fact);
    return 0;
}