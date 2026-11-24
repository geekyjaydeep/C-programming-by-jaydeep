#include<stdio.h>
int main(){
    int n ;
    int fact = 1 , sum = 0;
    printf("Enter the value of n: ");
    scanf("%d" , &n);
    for(int j = 1 ; j <= n ; j++){
        fact = 1;
        for(int i = j ; i >= 1 ; i--){
            fact = fact*i;
        }
        if(j != n)
        printf("%d! + " , j);
        else 
        printf("%d! " , j);
         sum = sum + fact;
    }
    printf("= %d\n" , sum );
    return 0;

}