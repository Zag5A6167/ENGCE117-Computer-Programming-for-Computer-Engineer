#include <stdio.h>

int main() {

    int n ;
    int value = 9 ;
    int sum = 0 ;
    printf("Enter number: ") ;
    scanf( "%d", &n ) ;

    for ( int i = 1; i <= n; i++ ) {
        sum += value ;
        

        printf( "%d", value ) ;
        if( i < n ) {
            printf( " + " ) ;

        }//end if

        value =  value * 10 + 9 ;
        
    }//end for

    printf("\n") ;

    printf( "Sum = %d ", sum ) ;

    return 0 ;

}//end function