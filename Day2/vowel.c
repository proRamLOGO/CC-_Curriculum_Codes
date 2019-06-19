#include <stdio.h>

int main() {

    char x ;
    printf("Enter a character:          ") ;
    scanf("%c",&x);

    /// To check if a character x is vowel or consonant
    /// using if else ladder
    if ( x =='a' ) {
        printf("Vowel\n") ;
    }
    else if ( x =='e' ) {
        printf("Vowel\n") ;
    }
    else if ( x =='i' ) {
        printf("Vowel\n") ;
    }
    else if ( x =='o' ) {
        printf("Vowel\n") ;
    }
    else if ( x =='u' ) {
        printf("Vowel\n") ;
    }
    else {
        printf("Consonant\n") ;
    }



    /// using OR i.e '||' LOGICAL OPERATOR
    /// 1. TO Print Vowel or consonant
    /// -----------------
    
    // using if else
    if ( (x=='a') || (x=='e') || (x=='i') || (x=='o') || (x=='u') ) {
        printf("Vowel\n") ;
    }
    else {
        printf("Consonant")
    }

    //Usin ternry opt
    ( x=='a' || x=='e' || x=='i' || x=='o' || x=='u' )? printf("Vowel") : printf("Consonant") ; 
    
    ///-----------------





    /// 2. TO Print only Vowel and nothing if consonant
    ///-----------------
    
    // using if else
    if ( (x=='a') || (x=='e') || (x=='i') || (x=='o') || (x=='u') ) {
        printf("Vowel\n") ;
    }

    //Usin ternry opt
    ( x=='a' || x=='e' || x=='i' || x=='o' || x=='u' )? printf("Vowel") : 1 ; 
    
    ///-----------------
    
}