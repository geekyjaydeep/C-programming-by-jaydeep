#include<stdio.h>
#include<math.h>
int main(){
    double p = 5 , b = 12;
    printf("Length of Perpendicular:%.2lf\n" , p);
    printf("Length of Base:%.2lf\n" , b);
    double h = sqrt(pow(p,2)+ pow(b,2));
    printf("Length of height =%.2lf\n" , h);
    return 0;


}