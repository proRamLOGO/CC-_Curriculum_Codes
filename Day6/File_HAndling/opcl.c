#include <stdio.h>

void main() {

    FILE* fp ;
    char c, s[1000] ;

    fp = fopen( "Text.txt", "r+" ) ;

    //Reading file

    fscanf( fp, "%s",s ) ;

    while ( c!=EOF ) {
        printf("%c",c) ;
        c = fscnaf(fp) ;
    }



    fclose( fp ) ;

}
