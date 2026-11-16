#include <stdio.h>
int main() {
    int marks;
    printf("Enter ur marks out of 100 : ");
    scanf("%d" , &marks);
    if(marks >= 33 && marks <=100)
    printf("PASS");
    else if(marks <= 33 && marks >=0)
    printf("FAIL");
    else 
    printf("Invalid marks");
    return 0;
}