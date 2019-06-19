#include <stdio.h>

int main() {

    printf( "Helloo!" ) ;
    printf( "H" ) ;
    //printf( 'H' ) ; //this line will cause an error.
    printf( "%c",'a' ) ; // we passed a constant to %c here i.e. 'a'.



    // print a charchter inputed by user
    char x ;
    scanf("%c",&x) ;
    printf( "%c",x ) ;

    return 0 ;

}
