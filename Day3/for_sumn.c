#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n) ;

    int sum = 0 ;
    for ( int i = 0 ; i < n ; ++i ) {
        sum += i+1 ;
    }

    sum = 0 ;
    for ( int i = 0 ; i < n ; ) {
        sum += ++i ;
    }

    printf("%d", sum) ;


}