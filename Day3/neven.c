#include <stdio.h>

int main() {

    int num ;
    scanf("%d", &num) ;
    
    /// normal loop
    
    int i = 0 ;
    int n = 2 ;
    while ( i < num ) {
        printf("%d, ",n) ;
        n += 2 ;
        ++i ;
    }
        printf("\n") ;


    // formula b1
    i = 0 ;
    //int n = 2 ;
    while ( i < num ) {

        printf("%d, ",(i++)*2) ;

        //printf("%d, ",(i+1)*2) ;
        //i++ ;
    }
    printf("\n") ;


    // formula b2
    i = 1 ;
    //int n = 2 ;
    while ( i <= num ) {
        printf("%d, ",i*2) ;
        ++i ;
    }
    
}