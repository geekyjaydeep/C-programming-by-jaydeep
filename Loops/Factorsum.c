#include<stdio.h>
int main(){
    int n , sum = 0;
    printf("Enter the number: ");
    scanf("%d" , &n);
    for(int i = 1 ; i<=n ; i++){
        if(n%i == 0){
            sum = sum + i ;
            if( i != n) 
            printf("%d + " , i);
            else 
            printf("%d ", i);
        } 
    }
    printf("= %d" , sum);
    return 0;
}