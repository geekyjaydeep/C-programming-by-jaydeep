#include<stdio.h>
int main(){
    int n ;
    printf("Enter the value of n: ");
    scanf("%d" , &n);
    int sum = 0 ; 
    float avg  = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    avg = (float)sum/n;
    printf("Sum: %d , Average: %.2f\n" , sum ,  avg);
    return 0;
}