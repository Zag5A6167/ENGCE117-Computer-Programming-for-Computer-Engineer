#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    int originArraySize = 5 ;
    printf( "Enter element new element of Array : " ) ;
    scanf( "%d", &n ) ;
    int *originArray = ( int* )malloc( originArraySize + n * sizeof( int ) ) ;
 
    originArray[ 0 ] = 9 ;
    originArray[ 1 ] = 2 ;
    originArray[ 2 ] = 6 ;
    originArray[ 3 ] = 1 ;
    originArray[ 4 ] = 7 ;

   
    int *arr = ( int* )malloc( n * sizeof( int ) ) ;
    
  
    for (int i = 0; i < n; i++ ) {
        printf( "Input : ", i ) ;
        scanf( "%d", &arr[ i ] ) ;
       
    }//end for

    for (int i = 0; i < n; i++)
    {
        originArray[ originArraySize + i ] = arr[ i ] ;

    }//end for
    


   
    printf( "\n" ) ;
    printf( "Old Array: " ) ;
    for ( int i = 0; i < originArraySize; i++ )
    {
        printf( "%d ", originArray[ i ] ) ;

    }//end for

    for(int i = 0; i < originArraySize + n - 1; i++ ) {
        int min = i;
        int temp ;
        for( int j = i + 1; j < originArraySize + n; j++ ) {
           if ( originArray[ j ] < originArray[ min ] ) {
                min = j;
            }//end if
            
 
        }//end for

        temp = originArray[ min ] ;
        originArray[ min ] = originArray[ i ] ;
        originArray[ i ] = temp ; 
    }//end for
    
    printf( "\n" ) ;

    printf( "New Array: " ) ;
    for (int i = 0; i < originArraySize + n; i++ ) {
        printf( "%d ", originArray[ i ] ) ;
        
    }//end for
    
  
    free( arr ) ;
    free( originArray ) ;
    return 0 ;
}//end function