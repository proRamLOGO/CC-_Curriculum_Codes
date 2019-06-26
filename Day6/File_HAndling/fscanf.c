#include <stdio.h>

void main() {

    FILE* fp ;
    char c, s[1000] ;

    fp = fopen( "Text.txt", "r+" ) ;

    //Reading file

    fscanf( fp, "%s",s ) ;

    while ( c!='\0' ) {
        printf("%s",s) ;
        fscanf( fp, "%s",s ) ;
    }



    fclose( fp ) ;

}
