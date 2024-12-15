#include <stdio.h>
#include <stdlib.h>
int main() {
    int decimal, binary[ 100 ], indexBinary = 0 ; 
    char hex[ 10 ] ;

    scanf( "%s", hex ) ;
  
    
    decimal = strtol( hex, NULL, 16 ) ; 


    while ( decimal > 0 ) {
        binary[ indexBinary ] = decimal % 2 ;
        decimal /= 2 ;
        indexBinary++ ;

    }//end while
    for ( int j = indexBinary - 1; j >= 0; j-- ) {
        printf( "%d", binary[ j ] ) ;

    }//end for
    printf( "\n" ) ;

    return 0;
}