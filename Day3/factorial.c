#include <stdio.h>

int main() {

    int num ;
    scanf("%d", &num) ;

    // direct
    /*
    int i=1, fact=1 ;

    while ( i <= num ) {
        fact *= i ;
        i++ ;
    }

    printf("%d",fact) ;
    */


    // experiment
    
    int i=0, fact=1 ;

    while ( i < num ) {
        fact *= (i+1) ;
        i++ ;
    }

    printf("%d\n",fact) ;

    fact = 1 ;

    for ( i = 0 ; i < num ; ) {
        fact *= (++i) ;
    }
    printf("%d",fact) ;


    
}