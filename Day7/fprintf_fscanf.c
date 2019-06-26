#include <stdio.h>

void main() {

    FILE* fp ;
    char c, s[1000] ;

    fp = fopen( "Text.txt", "r+" ) ;

    //Input
    fscanf( fp ,"%s",s ) ;

    fclose( fp ) ;

    fp = fopen( "Text.txt", "w+" ) ;

    //Output
    fprintf( fp ,"srgvssvsv %s %4d",s,33 ) ;

    fclose( fp ) ;

}
