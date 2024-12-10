#include <stdio.h>


int main() {

    int n;
    int sum = 0 ;
    float avg = 0 ;
    int InputNumber ;
    printf( "Enter value n: " ) ;
    scanf( "%d",&n ) ;

    for ( int i = 0; i < n; i++ ) {
        printf( "Enter number %d: ", i + 1 ) ;
        scanf( "%d",&InputNumber ) ;
        sum += InputNumber ;

    }//end for
    
    printf( "\nSum = %d\n", sum ) ;

    avg = ( float )sum / n ;
    printf( "Avg = %.2f", avg ) ;

    return 0 ;
}//end function