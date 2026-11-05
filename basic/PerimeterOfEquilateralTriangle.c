#include<stdio.h>
int main(){
    float a;
    printf("Enter the side = ");
    scanf("%f" , &a);
    float perimeter = 3*a;
    printf("Perimeter = %.2f\n" , perimeter);
    return 0;

}