#include <stdio.h>

int fact( int num ) {

    int fact=1 ;

    for ( int i = 0 ; i < num ; ) {
        fact *= (++i) ;
    }

    //printf("%d",fact) ;

    return fact ;
}


int main() {

    int num ;
    scanf("%d", &num) ;

    int res = fact(num) ;
    printf("\n%d", fact(num) ) ;


    
}