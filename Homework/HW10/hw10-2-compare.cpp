#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {

    char *array ;
    char character ;
    int arraySize = 2 ;
    int position = 0 ;
    array = ( char * )malloc( arraySize * sizeof( char ) ) ;

   
    while ( true )
    {
        printf( "Enter 1 character : " ) ;
        scanf( " %c", &character ) ;

        if(character == 'Y' || character == 'y' ) {
            break;
            
        }//end if

        array[ position ] = character ;
        position += 1 ;

        if ( position % 2 == 0 ) {
            array = ( char * )realloc( array, ( position + arraySize ) * sizeof( char ) ) ;
        }//end if
    }//end while
    
    printf( "String = " ) ;
    for ( int i = 0; i < position; i++ ) { 
        printf( "%c ",array[ i ] ) ;

    }//end for
    

    return 0 ;
}//end function 