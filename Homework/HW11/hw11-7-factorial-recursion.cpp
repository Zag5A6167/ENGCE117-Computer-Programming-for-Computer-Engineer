#include <stdio.h>

/** 
  Function Name : factorial int
  @Param Input n   int 
 
**/
int fac(int n) {
    if ( n == 1 ) {
        return 1 ;
        
    }//end if
    else {
        return n * fac( n - 1 ) ;

    }//end else
   
}


int main() {

    int num ;
    scanf( "%d", &num ) ;
    int result = fac( num ) ;
    printf( "%d! = ",num ) ;

    for ( int i = num; i > 0; i-- ) {
        printf( "%d", i ) ;

        if( i > 1 ) {
            printf( "x" ) ;

        }//end if
       
    }//end for

    printf( "\n%d! = %d\n", num, result ) ;

    return 0;
}