#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *file ;
    char name[ 20 ] ;
    int row = 100 ;
    int col = 100 ;
    char defaultNameArray[ row ][ col ] ;
    int index = 0 ; //for array index

    file = fopen( "a15-8.txt", "r" ) ;
    if (file  == NULL ) {
        printf( "Can't open" ) ;
        exit( 0 ) ;

    }//end if
    

while( !feof( file ) ) {
    fscanf( file,"%s", name) ;
        strcpy( defaultNameArray[ index ], name ) ;
        index++ ;
    }//end while


    printf( "Normal (%d Item): ",index ) ;
    
    for ( int i = 0; i < index - 1; i++ ) {
        printf( "%s ", defaultNameArray[ i ] ) ;
    
    }//end for


    
    for ( int i = 0; i < index - 1; i++ ) {
        for ( int j = 0; j < index - i - 1; j++ ) {
            if (strcmp( defaultNameArray[ j ], defaultNameArray[ j + 1 ] ) > 0 ) {
                char temp[ col ] ; 
                strcpy( temp, defaultNameArray[ j ] ) ;
                strcpy( defaultNameArray[ j ], defaultNameArray[ j + 1 ] ) ;
                strcpy( defaultNameArray[ j + 1 ], temp ) ;

            }//end if
    }//end for
}//end while

    printf( "\n" ) ;
    // print A - Z
    printf( "Sort ( A to Z ) : " ) ;
    for ( int i = 0; i < index - 1; i++ ) {
        printf( "%s ", defaultNameArray[ i ] ) ;
    
    }//end for
    
    // print Z-A
    printf( "\n" ) ;
    printf( "Sort ( Z to A ) : " ) ;
    for ( int i = index - 1; i >= 0; i-- ) {
        printf( "%s ", defaultNameArray[ i ] ) ;
        
    }//end for
    
   
    
        
    
    

    fclose( file ) ;
    return 0 ;
 
}//end function