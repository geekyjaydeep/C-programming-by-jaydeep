#include<stdio.h>
#include<math.h>
int main(){
    double p , r , t ;
    printf("Enter the Principal amount: ");
    scanf("%lf" , &p);
    printf("Enter the Rate: ");
    scanf("%lf" , &r);
    printf("Enter the time: ");
    scanf("%lf" , &t);
    double a = p*pow((1+r/100),t);
    double CI = a-p;
    printf("Compound Interest = %.2lf" , CI);
    return 0;
}