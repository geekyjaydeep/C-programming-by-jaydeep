#include<stdio.h>
int main(){
    int num = 10;
    char ch = 'J';
    float a = 20.43;
    long jay = 283974;
    double barfi = 234.827492; //for double format specifier is lf 
    //and for long format specifier is ld

    printf("Num = %05i\n", num);
    printf("ch = %c\n" , ch);
    printf("a = %.2f\n" , a); //.2 ya .3 batata h ki tumko kitna digit chahiye after decimal 
    printf("jay = %ld\n" , jay);
    printf("barfi = %.2lf\n" , barfi);
    return 0;
    //long hota int ka bada bhai 
    //double hota h float ka bada bhai  
}