// #include<stdio.h>
// int main(){
//     float c;
//     printf("Enter the temperature in degree celsius - ");
//     scanf("%f" , &c);
//     float f = (c*9/5)+32;
//     printf("In degree Fahrenheit - %.2f" , f);
//     return 0 ;

// }

//abhi kelvin to degree celsius 

// #include<stdio.h>
// int main(){
//     float c;
//     printf("Enter the Temp in degree celsius - ");
//     scanf("%f" , &c);
//     float k = (c+273.15);
//     printf("Temp in kelvin = %.2f" , k);
//     return 0;
// }

// now kelvin to degree celsius 

#include <stdio.h>
int main() {
    float k;
    printf("Enter the temp in kelvin - ");
    scanf("%f" , &k);
    float c = (k-273.15);
    printf("In degree Celsius = %.2f" , c);
    return 0;
} 
//for k to c = k-273
//and for c to k = c+273