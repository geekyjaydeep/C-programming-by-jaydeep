#include<stdio.h>
int main(){
    // float m;
    // printf("Enter the value in m - ");
    // scanf("%f" , &m);
    // float km = m/(1000);
    // printf("Value in Kilometre = %.2f" , km);
    // return 0 ; 

    //abhi km/h to m/s wala coversion ka code likhna h 

    float km ;
    printf("Enter the value in km/h - ");
    scanf("%f" , &km);
    float m = km*(5.0/18.0); // jab bhi float ke ander kuch formula likho toh yeh dhyan m 
    //rakho ki number bhi float ke format m hona chahiye means in decimal format mein 
    printf("value in m/s = %.3f" , m);
    return 0;
}