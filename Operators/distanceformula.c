#include<stdio.h>
#include<math.h>
int main(){
    double x1,x2,y1,y2;
    printf("Enter the coordinates of (x1,x2): ");
    scanf("%lf,%lf" , &x1 , &x2);
    printf("Enter the coordinates of (y1,y2): ");
    scanf("%lf,%lf" , &y1 , &y2);
    double distance = sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
    printf("Distance = %.2lf" , distance );
    return 0;
}