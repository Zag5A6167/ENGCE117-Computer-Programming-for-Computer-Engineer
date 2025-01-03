#include <stdio.h> 

void printMatrix( int matrix[ 10 ][ 10 ], int size ) ;
void modifyMatrix( int matrix[ 10 ][ 10 ], int size, int mode ) ;



int main() {
    int size ;
    int matrix[ 10 ][ 10 ] ;
    int mode ;

    printf( "Input cube size :\n" );
    scanf( "%d", &size );

    printf( "Input element :\n" );
    
    for ( int i = 0 ; i < size ; i ++ ) {
        for ( int j = 0 ; j < size ; j ++ ) {
            scanf( "%d", &matrix[ i ][ j ] );

        } //end for
    } //end for

    printf( "Show zero (1=Left, -1=Right) :\n" ) ;
    scanf( "%d", &mode ) ;

    printf( "Matrix =\n" );
    printMatrix( matrix, size );

    modifyMatrix( matrix, size, mode );

    if ( mode == 1 ) {
        printf( "Left Matrix =\n" );

    } else if ( mode == -1 ) {
        printf( "Right Matrix =\n" );

    } //end if

    printMatrix( matrix, size );

    return 0 ;
} //end function

void printMatrix( int matrix[ 10 ][ 10 ], int size ) {
    for ( int i = 0 ; i < size ; i ++ ) {
        for ( int j = 0 ; j < size ; j ++ ) {
            printf( "%d ", matrix[ i ][ j ] );
        } //end for
        printf( "\n" );
    } //end for
} //end function

void modifyMatrix( int matrix[ 10 ][ 10 ], int size, int mode ) {
    if ( mode == 1 ) {
        for ( int i = 1 ; i < size ; i ++ ) {
            for ( int j = 0 ; j < i ; j ++ ) {
                matrix[ i ][ j ] = 0 ;
            } //end for
        } //end for
    } else if ( mode == -1 ) {
        for ( int i = 0 ; i < size - 1 ; i ++ ) {
            for ( int j = i + 1 ; j < size ; j++ ) {
                matrix[ i ][ j ] = 0 ;
                
            } //end for
        } //end for
    } //end if
} //end function