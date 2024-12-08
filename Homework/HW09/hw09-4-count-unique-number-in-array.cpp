#include <stdio.h>
#include <stdlib.h>

int main() {

    int n ;

    printf( "Input N: " ) ;
    scanf( "%d", &n ) ;

    int *arr = ( int* )malloc(n * sizeof( int ) ) ;
    
    int cnt[ 100 ] = { 0 } ;

    for (int i = 0; i < n; i++ ) {
        printf( "Element[%d] : ", i ) ;
        scanf( "%d", &arr[ i ] ) ;
       
    }//end for
   


    for(int i = 0; i < n - 1; i++ ) {
        int min = i;
        int temp ;
        for( int j = i + 1; j < n; j++ ) {
           if ( arr[ j ] < arr[ min ] ) {
                min = j;
            }//end if
            
 
        }//end for

        temp = arr[ min ] ;
        arr[ min ] = arr[ i ] ;
        arr[ i ] = temp ; 
    }//end for

    
    for (int i = 0; i < n; i++) {
        cnt[ arr[ i ] ]++ ;

    }//end for



    for (int i = 0; i < 100; i++) {
        if (cnt[i] > 0) {
            printf("%d -> %d times\n", i, cnt[ i ] ) ;

        }//end if
    }//end for



   


    
    

    free( arr ) ;
    return 0 ;
}//end function