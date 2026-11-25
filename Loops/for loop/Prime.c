#include<stdio.h>
int main(){
    int n = 50, c = 0;
    printf("Enter the number: ");
    scanf("%d" , &n);
    for(int i =1; i<= n ; i++){
        if(n%i == 0){
            c++;
        }
    }
    printf(c == 2 ? "Prime\n" : "Not Prime\n"); // yaha ternary operator ka use kiya h maine 
    return 0 ; 
}