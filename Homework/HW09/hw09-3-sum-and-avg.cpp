#include <stdio.h>
#include <stdlib.h>
int main() {
    
    int currElement = 0, size ; 
    int *arr ;
    int *arr2 ;
    int inputNum ;
    arr = ( int * )malloc( size * sizeof( int ) ) ;
    arr2 = ( int * )malloc( size * sizeof( int ) ) ;



    for (int  i = 0; i < size; i++) {
        
        printf( "Input value to Array1[%d]: ", i ) ;
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
        
    }//end for

        
     
    
    printf( "\nArray1 = " ) ;
    for (int i = 0; i < currElement; i++ ) {
        printf( "%d ", arr[ i ] ) ;
    }
    
    printf( "\nArray2 = " ) ;
    for ( int i = 0; i < currElement; i++ ) {
        printf( "%d ", arr2[ i ] ) ;

    }//end for

    printf( "\n" ) ;

    for ( int i = 0; i < size; i++ ) {
            arr2[i] = arr[i];

    }//end for

    printf( "--| Copy Data from Array1 to Array2" ) ;

    printf( "\nArray2 = " ) ;

    for ( int i = 0; i < currElement; i++ ) {
        printf( "%d ", arr2[ i ] ) ;

    }//end for

    free( arr2 ) ;
    free( arr ) ;
    
    return 0 ;
}//end function