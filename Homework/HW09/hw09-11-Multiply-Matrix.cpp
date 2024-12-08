#include <stdio.h>

int main() {
    int Matrix1[ 10 ][ 10 ], Matrix2[ 10 ][ 10 ], Matrix3[ 10 ][ 10 ] ;
    int rows1, cols1, rows2, cols2, rows3, cols3 ;
    int i, j, k ;
 
   
    printf( "Array1 element : " ) ;
    scanf( "%d %d", &rows1, &cols1 ) ;
    for( i = 0; i < rows1; i++ ) {
        for( j = 0;j < cols1; j++ ) {
            scanf( "%d", &Matrix1[ i ][ j ] ) ;
        }//end for
    }//end for
 

 



     printf( "Array2 element : " ) ;
    scanf( "%d %d", &rows2, &cols2 ) ;
    for( i = 0; i < rows2; i++ ) {
        for( j = 0;j < cols2; j++ ) {
            scanf( "%d", &Matrix2[ i ][ j ] ) ;
        }//end for
    }//end for
 


 
 

   
    printf( "\nArray1\n" ) ;
    for( i = 0; i < rows1; i++ ) {
        for( j = 0;j < cols1; j++ ) {
            printf( "%d ", Matrix1[ i ][ j ] ) ;

        }//end for
        printf("\n") ;

    }//end for

    printf( "\nArray2\n" ) ;
    for( i = 0; i < rows2; i++ ) {
        for( j = 0;j < cols2; j++ ) {
            printf( "%d ", Matrix2[ i ][ j ] ) ;

        }//end for
        printf("\n") ;
        

    }//end for


    if( cols1 != rows2)  {
        printf( "\nMatrix1 and Matrix2 connot multiply\n" ) ;

    }
    else {   
        rows3 = rows1 ;
        cols3 = cols2 ;
    for( i = 0; i < rows3; i++ ) {
        for( j = 0;j < cols3; j++ ) {
            Matrix3[ i ][ j ] = 0 ; 
            for( k = 0; k < cols1; k++ ) {
                Matrix3[ i ][ j ] += Matrix1[ i ][ k ] * Matrix2[ k ][ j ] ;
            }//end for
        }//end for
    }//end for




    printf( "\nArray1 x Array2\n" ) ;

        for( i = 0; i < rows3; i++ ) {
            for( j = 0; j < cols3; j++ ) {
                printf( "%d ", Matrix3[ i ][ j ] ) ;
            }
            printf( "\n" ) ;
        }//end for
    }//end else



    return 0 ;
 
}//end function 