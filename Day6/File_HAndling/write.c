#include <stdio.h>

void main() {

    FILE* fp ;
    char c, s[1000] ;

    fp = fopen( "Text.txt", "w+" ) ;

    //Reading file

    for ( auto i = 97 ; i < 122 ; ++i )
        fputc( i , fp ) ;

    fclose( fp ) ;

}
