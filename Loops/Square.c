#include<stdio.h>
int main(){
    int a = 2, b = 5;
    int pow = 1 ;
    for(int i = 1; i <= b; i++){
        pow = pow*2;

    }
    printf("square of 2 to the power 5: %d\n" , pow);
    return 0;

}