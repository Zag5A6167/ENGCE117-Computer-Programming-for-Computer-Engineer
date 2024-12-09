#include <stdio.h>
#include <string.h>

int main() {

    char name[ 200 ] ;
    
    fgets( name, sizeof( name ), stdin ) ;
    name[ strcspn( name, "\n" ) ] = '\0' ;
    printf( "Name : %s",name ) ;

    return 0 ;
}//end function 