#include <stdio.h>
#include <math.h>

int main() {

    int num ;
    scanf("%d", &num) ;
    
    int i = 1 ;

    while ( i <= num ) {

        int j=2 ;
        _Bool res = 1 ;

        while ( j <= i/2 ) {

            if ( i%j == 0 ) {
                printf("%d Not Prime\n",i) ;
                res = 0 ;
                break ;
            }

            j++ ;
        }
        if ( res ) {
            printf("%d Prime\n",i) ;
        }
    
        ++i ;

    }

}