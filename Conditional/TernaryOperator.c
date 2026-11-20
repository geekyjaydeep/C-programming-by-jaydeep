#include<stdio.h>
int main(){
    int age ;
    printf("Enter your age: ");
    scanf("%d" , &age);
// ternary operator = condition ? true : false   yeh format h ternary operator ka 
    printf((age >= 18) ? "ur eligible for voting\n" : "Ur not eligible for voting\n");
    return 0;
}