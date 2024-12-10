#include <stdio.h>


/** 
  Function Name : fib int
  @Param Input n   int 
 
**/

int fib( int n ) {
    if( n <= 1 ) {
        return n ;
    }//end if
    else {
        return fib( n - 1 ) + fib( n - 2 ) ;
    }//end else

}//end function fib

int main() {
    int sum = 0 ;
    int n ;
    scanf( "%d", &n ) ;
    fib( n ) ;

    printf( "Series = " ) ;
    for ( int i = 1; i <= n; i++) {
        sum += fib( i ) ;
        printf( "%d", fib( i ) ) ;

        if( i < n ) {
            printf( " + " ) ;

        }//end if

    }//end for
    printf("\nSum = ");
    printf("%d",sum);

    return 0 ;

}//end function