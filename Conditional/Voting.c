#include<stdio.h>
int main(){
    char status;
    int age;
    printf("Are u alive(y/n): ");
    scanf("%ch" , &status);
    if(status == 'y')
    {
        printf("Enter your age: ");
        scanf("%d" , &age);
        if (age<0) printf("Invalid age\n");
        else if (age >= 18)
        printf("Ur eligible for voting");
        else printf("Ur not eligible for voting");
    }
    else if(status == 'n')
    printf("Person is not alive");
    else 
    printf("Invalid status");
}
