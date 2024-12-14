#include <stdio.h>


int main() {

    int n ;
    scanf( "%d", &n ) ;
    int userInput = n ;
    int count = 1 ;
    

    while( count <= userInput && userInput % 2 == 0 ) {
        printf( "(%d) Hello World\n", count ) ;
        count++ ;

    }//end while
    
    while( count <= userInput && userInput % 2 != 0 ) {
        printf( "[%d] Hello World\n", count ) ;
        count++ ;

    }//end while
    
    
    

    return 0 ;

}//end function

















