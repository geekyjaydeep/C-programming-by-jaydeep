#include<stdio.h>
int main(){
    // int i = 5;
    // for (i = 1 ; i <= 5; i++ )  /// SSS s=start s = stop  s=step 
    // // infinite loop ke liye i++ means step ko nhi likhne se chal jayega 
    // {
    //     printf("Barfi\n" );
    // }
    // return 0;

    // int i = 5;
    // for (i = 1 ; i <= 5; i++ )  /// SSS s=start s = stop  s=step 
    // // infinite loop ke liye i++ means step ko nhi likhne se chal jayega 
    // {
    //     if(i == 3) // isme program bass 2 tak chalega and the 3 se band ho jayega 
    //     break;
    //     printf("%d\n" , i );
    // }
    // return 0;


    int i = 5;
    for (i = 1 ; i <= 5; i++ )  /// SSS s=start s = stop  s=step 
    // infinite loop ke liye i++ means step ko nhi likhne se chal jayega 
    {
        if(i == 3) 
        continue; // isme program 3 ko bass skip kar dega 
        printf("%d\n" , i );
    }
    return 0;
}