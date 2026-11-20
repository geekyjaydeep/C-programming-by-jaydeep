#include<stdio.h>
int main(){
    char vowel;
    printf("Enter your alphabet: ");
    scanf("%ch" , &vowel);

    // switch (vowel)
    // {
    // case ('a'):
    //     printf("Vowel");
    //     break;
    // case ('e'):
    //     printf("Vowel");
    //     break;
    // case ('i'):
    //     printf("Vowel");
    //     break;
    // case ('o'):
    //     printf("Vowel");
    //     break;
    // case ('u'):
    //     printf("Vowel");
    //     break;
    
    // default:
    // printf("Consonant");
    //     break;
    // }  yeh h AAm zindagi 

    switch (vowel)   // mentos zindagi !!
    {
    case 'a':
    case'e':
    case'i':
    case'o':
    case'u':
    printf("Vowel");
    break;



    default:
    printf("Consonant");
        break;
    }
    return 0;
}