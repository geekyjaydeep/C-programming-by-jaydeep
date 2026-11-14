#include <stdio.h>
int main() {
    int a = 55;
    // a++; agar mein iss expression ko printf ke bahar likhe toh output 55 nhi 56 aayega 
    // printf("%i\n" , a); agar humlog a++ ko  printf ke ander likhte toh output 55 aata and then woh 55 ko 56 m change karta h 
    printf("%i\n" , (a++)); // post inc.
    printf("%i\n" , (++a)); // pre inc.
    a--;
    printf("%i\n" , a);


    int b = 99;
    // b--;
    printf("%i\n" , b);
    printf("%i\n" , (b++)); // phele b print karega and then b mein +1 ka increment karega 
    printf("%i\n" , b);
    b--;
    printf("%i\n" , b);
    printf("%i\n" , (b--));
     printf("%i\n" , b);
    return 0;

}