#include <stdio.h>
int main() {

    FILE *file ;
    char c ;
    file = fopen( "a15-1.txt", "r" ) ;

    while ( (c = fgetc( file ) ) != EOF ) {
        printf( "%c", c ) ;
    }//end while

  

    fclose( file ) ;
    return 0 ;
}//end function 