#include<stdio.h>
int main(){
    int n , c=0;
    printf("Enter the value of n: ");
    scanf("%d" , &n);
    for(int i = 1 ; i <= n ; i++){
        if(n%i == 0){
            printf("%d " , i );
        c++;
        } 
    }
    printf("\n");
    printf("Their are %d factors for the number %d." , c , n);
    return 0 ;

}