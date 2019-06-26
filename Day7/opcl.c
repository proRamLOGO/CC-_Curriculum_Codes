#include <stdio.h>

void main() {

    FILE* fp ;
    char c, s[1000] ;

    fp = fopen( "Text.txt", "r+" ) ;

    fclose( fp ) ;

}
