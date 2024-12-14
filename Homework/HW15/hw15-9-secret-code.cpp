#include <stdio.h>



int main() {

    FILE *file ;
    char c;
    file = fopen( "a15-9.txt", "r" ) ;


    while ( ( c = getc( file ) )  != EOF ) {
        if( c != ' ' ) {
            c += 6 ;
            if( c > 'Z' ) {
                c -= 26 ;  //reset to A

            }//end if
            
        }//end if
        
        printf( "%c", c ) ;

    }//end while
    


    fclose( file ) ;


    return 0 ;
}//end function