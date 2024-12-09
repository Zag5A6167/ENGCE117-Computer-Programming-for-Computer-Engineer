#include <stdio.h>
#include <string.h>

int main() {

    char name[ 200 ] ;
    
    fgets( name, sizeof( name ), stdin ) ;
    name[ strcspn( name, "\n" ) ] = '\0' ;
    
    int len = strlen(name) ;
    for ( int i = len - 1; i >= 0; i-- ) {
        printf( "%c", name[ i ] ) ;

    }//end for
    
    return 0 ;
}//end function  