#include <stdio.h>
#include <math.h>

int main() {

    int num, cnt=0 ;
    scanf("%d", &num) ;
    
    int i = 2 ;

    while ( cnt != num ) {

        _Bool res = 1 ;
        int j = 2 ;

        while ( j <= i ) {

            if ( i%j == 0 ) {
                res = 0 ;
                break ;
            }

        } 
        if ( res ) {
            printf("%d, ",i) ;
            ++cnt ;
        }

        ++i ;
//        printf("\n vla :%d ", i ) ;

    }
}