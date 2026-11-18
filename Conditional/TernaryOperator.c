#include<stdio.h>
int main(){
    int age ;
    printf("Enter your age: ");
    scanf("%d" , &age);

    printf((age >= 18) ? "ur eligible for voting\n" : "Ur not eligible for voting\n");
    return 0;
}