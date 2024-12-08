#include <stdio.h>

int main() {
    int Matrix1[ 10 ][ 10 ], Matrix2[ 10 ][ 10 ] ;
    int rows1, cols1, rows2, cols2 ;
    int i, j ;
 
   
    printf( "Array element : " ) ;
    scanf( "%d %d", &rows1, &cols1 ) ;
    for( i = 0; i < rows1; i++ ) {
        for( j = 0;j < cols1; j++ ) {
            scanf( "%d", &Matrix1[ i ][ j ] ) ;
        }//end for
    }//end for
 

 
    printf( "Array\n" ) ;
    for( i = 0; i < rows1; i++ ) {
        for( j = 0;j < cols1; j++ ) {
            printf( "%d ", Matrix1[ i ][ j ] ) ;

        }//end for
        printf("\n") ;

    }//end for
 


    rows2 = cols1 ;
    cols2 = rows1 ;

    for( i = 0; i < rows2; i++ ) {
        for( j = 0;j < cols2; j++ ) {
        Matrix2[ i ][ j ] = Matrix1[ j ][ i ] ;

        }//end for
        
    }//end for

    printf( "Array Transpose\n" ) ;
    for( i = 0; i < rows2; i++ ) {
        for( j = 0;j < cols2; j++ ) {
            printf( "%d ", Matrix2[ i ][ j ] ) ;

        }//end for
        printf("\n");

    }//end for
   
    return 0 ;

}//end function 