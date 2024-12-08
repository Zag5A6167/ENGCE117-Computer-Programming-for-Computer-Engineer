#include <stdio.h>
#include <stdlib.h>
int main() {
    
    int currElement = 0, size ; 
    int *arr ;
    int inputNum ;
    arr = ( int * )malloc( size * sizeof( int ) ) ;

    printf( "Enter number (-1 to stop):\n" ) ;

    while( true ) {
        
        scanf( "%d", &inputNum ) ;

        if( inputNum == -1 ) {
            break ;

        }//end if

        if ( currElement == size ) {
            size *= 2 ;
            arr = ( int * )realloc( arr, size * sizeof( int ) ) ;
            
        }//end if

        arr[ currElement ] = inputNum ; 
        currElement += 1 ;
    }//end while
    
    printf( "Index = " ) ;
    for (int i = 0; i < currElement; i++) {
        printf( "%d ", i ) ;

    }
    
    printf( "\n" ) ;

    printf( "Array = " ) ;
    for (int i = 0; i < currElement ; i++ ) {
        printf( "%d ", arr[ i ] ) ;

    }//end for
   
    
    free( arr ) ;
    
    return 0 ;
}//end function