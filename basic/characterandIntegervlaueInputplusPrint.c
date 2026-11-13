#include<stdio.h>
int main(){
    int num1;
    char ch ;
    printf("Enter the integer value = ");
    scanf("%d" , &num1);

    printf("Enter the character value =  ");
    // scanf("%c" , &ch); yeh galat h kyuki bina space diye %c likhenge toh program yeh imagine karega 
    // ki buffer m phele se \n padha hua h sahi tarika h niche wala line m likha hua h 
    // yeh rule tab lagega jab int ko char ke phele print kiya jaaye ya input liya jaaye 
    scanf(" %c" , &ch);
    printf("Interger = %d Character = %c\n" , num1 , ch );
    return 0;
}
