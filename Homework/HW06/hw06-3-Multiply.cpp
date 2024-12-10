#include <stdio.h>


int main() {

    int start ; 
    int end ;
    printf( "Start : " ) ;
    scanf( "%d",&start ) ;
    printf( "\nEnd : " ) ;
    scanf( "%d", &end ) ;
    for ( int j = start; j <= end; j++ ) {
        for ( int i = 1; i <= 9; i++ ) {
            int res = j * i ;
            printf( "%d x %d = %d\n", j, i, res ) ;

        }//end for
        printf( "\n" ) ;
    }//end for
    
    
    

    return 0 ;

}//end function