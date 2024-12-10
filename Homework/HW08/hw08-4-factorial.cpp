#include <stdio.h>


int main() {

    int num ;
    scanf( "%d", &num ) ;
    int i = num ;
    int sum = 1;
   
    printf( "%d! = ",num ) ;

    while ( i ) {
       printf( "%d ", i ) ;

       if( i > 1 ) {
        printf( " x " ) ;

       }//end if    
       sum *= i ;
       i-- ;
    }//end while
    
    printf( "\n" ) ;
    printf( "%d! = %d ", num, sum ) ;
    

    return 0 ;
}//end function