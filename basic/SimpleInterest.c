#include<stdio.h>
int main(){
    float p,t,r;
    printf("Enter the Principal - ");
    scanf("%f" , &p);
    printf("Enter the time - ");
    scanf("%f" , &t);
    printf("Enter the rate - ");
    scanf("%f", &r);
    float SI = (p*t*r)/100;
    float A = (SI+p);
    printf("Simple interest = %.2f\n" , SI);
    printf("Total amount = %.2f" , A);
    return 0;
}