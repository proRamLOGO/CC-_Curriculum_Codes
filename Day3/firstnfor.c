#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n) ;

    for ( int i = 0 ; i < n ; ++i ) {
        printf("%d ", i+1 ) ;
    }
    printf("\n") ;
    for ( int i = 1 ; i <= n ; ++i ) {
        printf("%d ", i ) ;
    }
    printf("\n") ;
    for ( int i = 1 ; i <= n ;  ) {
        printf("%d ", i++ ) ;
    }

}