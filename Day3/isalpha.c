#include <stdio.h>

int main() {

    char x ;
    scanf("%c", &x) ;

    /// Ap1 - using ascii value on comparison
    
    if ( 96 < x && x < 123 ) {
        printf ( "isalphabet ") ;
    }
    if (65 <= x && x <= 90) {
        printf ( "isalphabet ") ;
    }
    else {
        printf("Not alpha") ;
    }
    /// Ap1 - using char value on comparison
    
    if ( 'A' <= x && x <= 'Z' ) {
        printf ( "isalphabet ") ;
    }
    if ('a' <= x && x <= 'z') {
        printf ( "isalphabet ") ;
    }
    else {
        printf("Not alpha") ;
    }
    

    // App2 - comapring witch chars itself
    /*
    if (( 'a' <= x && x <= 'z' ) || ('A' <= x && x <= 'Z') ) {
        printf ( "isalphabet ") ;
    }
    else {
        printf("Not alpha") ;
    }
    */

    return 0 ;
    

}