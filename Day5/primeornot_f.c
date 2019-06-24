#include <stdio.h>
#include <math.h>

_Bool primeChk( int num ) {

    for ( int i = 2 ; i <=  sqrt(num) ; ++i ) {
        if ( num%i == 0 ) 
            return 0 ;
    }
    return 1 ;

}


void main() {

    int num ;
    scanf("%d", &num) ;
    _Bool res = primeChk(num) ;

    ( res )? printf("Prime") : printf("Not Prime") ;
    



    
}