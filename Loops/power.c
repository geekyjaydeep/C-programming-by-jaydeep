#include<stdio.h>
int main(){
    int a,b;
    int pow = 1;
    printf("Enter the value of a & b: ");
    scanf("%d , %d" , &a , &b);
    for(int i = 1; i<=b ; i++){
        pow = pow * a;
    }
    printf("a raised to the power b = %d\n" , pow);
    return 0 ;


}