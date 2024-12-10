#include <stdio.h>
#include <stdlib.h>
int main() {


    int n ;
    int sum = 0 ;
    scanf( "%d",&n ) ;
    int *arr = ( int* )malloc( n * sizeof( int ) ) ;

    arr[ 0 ] = 1 ;
    arr[ 1 ] = 1 ;
   


    for ( int i = 2; i <= n; i++ ) {
        arr[ i ] = arr[ i - 1 ] + arr[ i - 2 ] ;  

    }//end for

    printf( "Series = " ) ;
    for ( int i = 0; i < n; i++ ) {
        printf( "%d", arr[ i ] ) ;

        if( i < n - 1 ) {
            printf( " + " ) ;

        }//end if
        sum += arr[ i ] ;

    }//end for
    
    printf( "\n" ) ;
    printf( "Sum = " ) ;
    printf( "%d",sum ) ;

    free( arr ) ;
    return 0 ;

}//end function