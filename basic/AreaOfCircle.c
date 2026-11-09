#include<stdio.h>
int main(){
    float r ;
    printf("Enter the radius - ");
    scanf("%f" , &r);
    float area = 3.1415*r*r;
    printf("Area of Circle = %.2f" , area );
    return 0;

}