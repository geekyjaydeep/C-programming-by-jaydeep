#include<stdio.h>
int main(){
    int count = 0, pcount = 0;
    printf("Prime numbers between 1 to 50: \n");
    for(int i = 1;i <= 50 ; i++){
        count = 0;
        for(int j = 1 ; j<= i ; j++) {
            if(i%j == 0)
            count++;
        }
        if(count == 2){
            printf("%d " , i);
        pcount++;
        } 
    }
    printf("\n");
    printf("Numbers of prime number between 1 to 50 = %d" , pcount);
    return 0 ;

}
