#include<stdio.h>
int main(){
    int a = 69, b = 55, c = 45;
    printf("%d\n" , (a>b) || (c>b)); // || this is used as 'OR' 
    printf("%d\n" , (a == b) && (c<b)); // &&  is used as 'AND'
    return 0;
}