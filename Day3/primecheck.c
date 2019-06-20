#include <stdio.h>
#include <math.h>

int main() {

    int num ;
    scanf("%d", &num) ;
    _Bool res = 1 ;

    //using for loop
    for ( int i = 2 ; i <=  num/2 ; ++i ) {
        if ( num%i == 0 ) {
            printf("Not Prime\n") ;
            res = 0 ;
            break ;
        }

    }
    if ( res ) {
        printf("Prime\n") ;
    }

    printf("\n") ;

    // using while loop
    int i = 2 ;

    res = 1 ;
    while ( i <= num/2 ) {

        if ( num%i == 0 ) {
            printf("Not Prime\n") ;
            res = 0 ;
            break ;
        }

        i++ ;
    }
    if ( res ) {
        printf("Prime\n") ;
    }



    
}