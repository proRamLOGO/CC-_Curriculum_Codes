#include <stdio.h>

void main() {

    FILE* fp ;
    char c, s[1000] ;

    fp = fopen( "Text.txt", "r+" ) ;

    //Input
    int x=0 ;
    c = fgetc(fp) ;
    while ( x!=10 ) {
        putc(c,stdout) ;
        fseek( fp, 6,SEEK_SET ) ;
        ++x ;
        c = fgetc(fp) ;
    }

    fclose( fp ) ;


}
