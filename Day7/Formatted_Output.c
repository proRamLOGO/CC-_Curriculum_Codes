#include <stdio.h>

void main() {

    ///INtegers
    ///printf( "%<+/-><Preceding Digit><Width>d"  )

    printf("%-05d\n",3) ;

    //for ( auto i = 1 ; i < 1001 ; i+=10 ) 
        //printf("%04d\n",i) ;

    
    ///Floats
    ///printf( "[$]%<+/-><Preceding Digit><Total Width>.<Width of decimal points>f"  )

    printf("%.2f",100/4.5) ;
    printf("\n%.f",100/4.5) ;
    printf("\n%10.2f",100/4.5) ;
    printf("\n%010.2f",100/4.5) ;
    printf("\n%-10.5f 45",100/4.5) ;
}