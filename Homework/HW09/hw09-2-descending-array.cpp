#include <stdio.h>
#include <stdlib.h>
int main() {
    
    int currElement = 0, size ; 
    int *arr ;
    int inputNum ;
    arr = ( int * )malloc( size * sizeof( int ) ) ;


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
    
  


    for(int i = 0; i < currElement - 1; i++ ) {
        int min = i;
        int temp ;
        for( int j = i + 1; j < currElement; j++ ) {
           if ( arr[ j ] < arr[ min ] ) {
                min = j;
            }
            
 
        }
        temp = arr[ min ] ;
        arr[min] = arr[ i ] ;
        arr[ i ] = temp ; 
    }


    printf( "0-99 : " ) ;
    for ( int i = 0; i < currElement ; i++ ) {
        printf( "%d ", arr[ i ] ) ;

    }//end for
   
    
    printf( "\n99-0 : " ) ;
    for ( int i = currElement - 1; i >= 0; i-- )
    {
        printf( "%d ", arr[i] ) ;
    }//end for
    


    free( arr ) ;
    
    return 0 ;
}//end function