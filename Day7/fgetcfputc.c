#include <stdio.h>

void main() {

    FILE* fp ;
    char c, s[1000] ;

    fp = fopen( "Text.txt", "r+" ) ;

    //Input
    c = fgetc(fp) ;
    while ( c!=EOF ) {
        putc(c,stdout) ;
        c = fgetc(fp) ;
    }

    fclose( fp ) ;

    fp = fopen( "Text1.txt", "w+" ) ;

    //Output
    for ( auto i = 0 ; i != 10 ; ++i ) {
        c = getc( stdin ) ;
        fputc(c,fp) ;
    }

    fclose( fp ) ;

}
