// #include<stdio.h>
// int main(){
//     int l;
//     printf("Enter the length = ");
//     scanf("%i" , &l);
//     int b;
//     printf("Enter the breadth = ");
//     scanf("%i" , &b);
//     int perimeter = 2*(l+b);
//     printf("Perimeter = %i" , perimeter);
//     return 0 ; 
// }

// #include<stdio.h>
// int main(){
//     float a;
//     printf("Enter the side of a square = ");
//     scanf("%f" , &a);
//     float perimeter = 4*a;
//     printf("Perimeter = %.2f" , perimeter );
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     float r;
//     printf("Enter the radius = ");
//     scanf("%f" , &r);
//     float circumference = 2*3.14*r;
//     printf("Circumference = %.2f" , circumference);
//     return 0 ;

// }

#include<stdio.h>
int main(){
    float a , b , c;
    printf("Enter the value of side a = ");
    scanf("%f" , &a);
    printf("Enter the value of side b = ");
    scanf("%f" , &b);
    printf("Enter the value of side c = ");
    scanf("%f" , &c);
    float perimeter = a+b+c ;
    if(a+b>c && b+c>a && c+a>b ){
        printf("Valid Triangle & Perimeter of this Scalane Triangle  = %.2f" , perimeter );
    }
    else{
        printf("Invalid Triangle\n ");
    }
    return 0 ;
}