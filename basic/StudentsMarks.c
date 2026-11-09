#include<stdio.h>
int main(){
    char name[50];
    int a,b,c,d,e;
    int roll;
    char dept[20];
    printf("Enter your name -");
    scanf("%49s" , name );
    printf("College name - UCET , VBU hazaribag\n");
    printf("Enter the Roll No. -");
    scanf("%i" , &roll);
    printf("Enter your Department -");
    scanf("%19s" , dept);
    printf("Enter the marks of CPDS = ");
    scanf("%i" , &a);
    printf("Enter the marks of English for Comm. = ");
    scanf("%i" , &b);
    printf("Enter the marks of Engineering Chemsitry = ");
    scanf("%i" , &c);
    printf("Enter the marks of Engineering Drawing  = ");
    scanf("%i" , &d);
    printf("Enter the marks of Engineering Mathematics = ");
    scanf("%i" , &e);
    printf("Total marks = 500\n");
    int total = (a+b+c+d+e);
    printf("Obtained marks = %i\n" , total);
    float avg = (a+b+c+d+e)/5.0;
    printf("Average marks = %.2f\n" , avg );
    float percent = (total / 500.0)*100.0;
    printf("Percentage = %.2f%%\n" , percent);
    return 0; 


}