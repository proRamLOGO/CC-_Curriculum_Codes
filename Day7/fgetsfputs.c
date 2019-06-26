#include <stdio.h>

void main() {

    FILE* fp ;
    char c, s[1000] ;

    fp = fopen( "Text.txt", "r+" ) ;

    //Input
    int x=0 ;
    fgets(s,1000,fp) ;
    while ( x!=10 ) {
        puts(s) ;
        fgets(s,1000,fp) ;
        ++x ;
    }

    fclose( fp ) ;

    fp = fopen( "Text1.txt", "w+" ) ;

    //Output
    for ( auto i = 0 ; i != 10 ; ++i ) {
        gets(s) ;
        fputs(s,fp) ;
        fputc(' ',fp) ;
    }

    fclose( fp ) ;

}
