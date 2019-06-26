#include <stdio.h>
#include <string.h>

void main() {

    char s1[5] = { 's', 'h', 'b', 'h', '\0' } ;
    char s2[7] = { 's', 'h', 'b', 'h', '\0' };

    //char s3 = "Shubh" ;
    //char s4 = "Bansal" ;

    if ( strcmp(s1,s2) )  //1 if diff
        printf("Diff\n") ;
    else                  //0 if same 
        printf("SAme\n") ;

    strcpy( s1, s2 ) ;
    

}