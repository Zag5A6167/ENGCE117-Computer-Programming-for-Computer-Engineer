#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;

    printf( "Enter  new element of Array : " ) ;
    scanf( "%d", &n ) ;
   
    int *arr = ( int* )malloc( n * sizeof( int ) ) ;
    
  
    for (int i = 0; i < n; i++ ) {
        printf( "Input : ", i ) ;
        scanf( "%d", &arr[ i ] ) ;
       
    }//end for

    
    

    printf( "Array: ");
    for ( int i = 0; i < n; i++ )
    {
        printf( "%d ", arr[ i ] ) ;
        
    }//end for
    



    for(int i = 0; i < n - 1; i++ ) {
        int min = i;
        int temp ;
        for( int j = i + 1; j < n ; j++ ) {
           if ( arr[ j ] < arr[ min ] ) {
                min = j;

            }//end if
            
 
        }//end for

        temp = arr[ min ] ;
        arr[ min ] = arr[ i ] ;
        arr[ i ] = temp ; 

    }//end for

    printf( "\n" ) ;
    printf( "The large 3rd element = " ) ;
    printf("%d",arr[ n - 3 ] ) ;
 
  
    free( arr ) ;
   
    return 0 ;
}//end function