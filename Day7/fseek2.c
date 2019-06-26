#include <stdio.h>

void main() {

    FILE* fp ;
    char c, s[1000] ;

    fp = fopen( "Text1.txt", "w+" ) ;

    fprintf(fp,"Shubh Bansal\n") ;

    fseek( fp, 6, SEEK_SET ) ;

    fprintf(fp,"loves programming") ;

    fclose(fp) ;

}
