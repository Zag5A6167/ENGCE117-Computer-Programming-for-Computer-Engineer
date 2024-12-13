#include <stdio.h>

int main() {
    int n ;
    char roman[ 1000 ] = "" ;
    int index = 0;
    scanf( "%d", &n ) ;
    int numberForDisplay = n;
    // 1000, 900, 500, 400,  100,  90,  50,   40,  10,   9,    5,    4,   1
    // "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"

    while(n > 0) {               
        if( n >= 1000 ) {
            roman[ index++ ] = 'M' ;
            n = n - 1000 ;
        }//end if
        else if( n >= 900 ) {
            roman[ index++ ] = 'C' ;
            roman[ index++ ] = 'M' ;
            n = n - 900;
        }//end else if
        else if( n >= 500 ) {
            roman[index++] = 'D' ;
            n = n - 500 ;

        }//end else if
        else if( n >= 400 ) {
            roman[ index++ ] = 'C' ;
            roman[ index++ ] = 'D' ;
            n = n - 400 ;

        }//end else if
        else if( n >= 100 ) {
            roman[ index++ ] = 'C' ;
            n = n - 100 ;

        }//end else if
        else if( n >= 90 ) {
            roman[ index++ ] = 'X' ;
            roman[ index++ ] = 'C' ;
            n = n - 90 ;

        }//end else if
        else if( n >= 50 ) {
            roman[ index++ ] = 'L' ;
            n = n - 50 ;

        }//end else if
        else if( n >= 40 ) {
            roman[ index++ ] = 'X' ;
            roman[ index++ ] = 'L' ;
            n = n - 40 ;

        }//end else if
        else if( n >= 10 ) {
            roman[ index++ ] = 'X' ;
            n = n - 10 ;

        }//end else if
        else if( n >= 9 ) {
            roman[ index++ ] = 'I' ;
            roman[ index++ ] = 'X' ;
            n = n - 9 ;

        }//end else if
        else if( n >= 5 ) {
            roman[ index++ ] = 'V' ;
            n = n - 5;

        }//end else if
        else if( n >= 4 ) {
            roman[ index++ ] = 'I' ;
            roman[ index++ ] = 'V' ;
            n = n - 4 ;

        }//end else if
        else if( n >= 1 ) {
            roman[ index++ ] = 'I' ;
            n = n - 1 ;

        }//end else if
    }//end while

    printf( "%d = %s", numberForDisplay, roman ) ;

    return 0;
}//end function