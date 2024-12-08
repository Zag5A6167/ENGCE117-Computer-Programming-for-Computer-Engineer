#include <stdio.h>

int main() {
    int Matrix1[ 10 ][ 10 ], Matrix2[ 10 ][ 10 ], Matrix3[10][10] ;
    int rows1, cols1, rows2, cols2 ;
    int i, j ;
 
   
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
 

    
    printf( "\n" ) ;
    printf( "Array1 + Array2 = Array3\n" ) ;

    
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            Matrix3[i][j] = Matrix1[i][j] + Matrix2[i][j];
            printf("%d ", Matrix3[i][j]);
        }
        printf("\n");
    }
    
    
    
    
   
    return 0 ;
 
}//end function 