#include<stdio.h>
int main(){
    char name[13];
    int age ;
    float weight;
    float h;
    printf("Enter your name - ");
    scanf("%12s" , name);
    printf("Enter your age - ");
    scanf("%d" , &age );
    printf("Enter your weight in Kg - ");
    scanf("%f" , &weight );
    printf("Enter your height in metre - ");
    scanf("%f" , &h);
    float BMI = weight /(h*h);
    printf("BMI = %.2f" , BMI);
    return 0 ; 
}