#include <stdio.h>


/** 
  Function Name : sunSerie int
  @Param Input n   int 
 
**/


int sumSerie( int n ) {
    int sum = 1 ;
    int factorial = 1 ;

    for ( int i = 2; i <= n; i++ ) {
        factorial *= i ;
        sum += ( i-1 ) + factorial ;
        
    }//end for

    return sum ;
}

int main() {
    int n;
    scanf( "%d", &n ) ;
    sumSerie( n ) ;
    int result = sumSerie( n ) ;
    printf( "Sum = %d", result ) ;

    return 0 ;
}//end function