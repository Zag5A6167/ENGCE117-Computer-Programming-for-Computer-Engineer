#include <stdio.h>
#include <string.h>


void reverse( char str1[], char str2[] ) ; 



int main() {
    char text[ 50 ] = "I Love You" ;  
    char out[ 50 ] ; 
    
    fgets( text, sizeof( text ), stdin ) ;
    reverse( text, out ) ; //fix code


    return 0 ;
}//end function

/** 
  Function Name : reverse
  @Param Input str1[] char   first text
  @Param Input str2[] char   reversed text
 
**/


void reverse( char str1[], char str2[] ) {

   int len = strlen( str1 );
   for ( int i = 0 ; i < len; i++ ) {
        str2[ i ] = str1[ len - 2 - i ] ;

    }//end for


    for( int i = 0 ; i < len ; i++ ) {
    	printf( "%c", str2[ i ] ) ;
      
    }//end for

}//end function reverse()