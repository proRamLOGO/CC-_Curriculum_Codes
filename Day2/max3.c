#include <stdio.h>
#include <math.h>

int main() {

    int n1, n2, n3 ;
    scanf("%d%d%d",&n1,&n2,&n3) ;

    /// Using nested if else
    if ( n1 > n2 ) {
        if ( n1 > n3 ) {
            printf("n1") ;
        }
        else {
            printf("n3") ;
        }
    }
    else {
        if ( n2 > n3 ) {
            printf("n2") ;
        }
        else {
            printf("n3") ;
        }    
    }

    ///Using logical operator
    if ( n1 > n2 && n1 > n3 ) {
        printf("n1") ;
    }
    else if ( n2 > n3  && n2 > n1) {
        printf("n2") ;
    }
    else {
        printf("n3") ;
    }
    

}