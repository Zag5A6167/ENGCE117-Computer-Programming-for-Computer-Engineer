#include <stdio.h>
#include <string.h>

void reverseString(char *reverse );

int main() {

    char str[ 20 ]  ;

    fgets( str, sizeof( str ), stdin ) ;
    str[ strcspn( str, "\n" ) ] = '\0' ;   //becuz fgets will store \n in string when enter

    reverseString( str ) ;
    
    printf( "%s", str ) ;

    return 0 ;

}//end function


void reverseString( char *reverse ) {
    int length = strlen( reverse ) ;
    int i;  //Init for first str
    

   
    for ( int i = 0; i < length / 2; i++ ) {
        char temp = reverse[ i ] ;
        reverse[ i ] = reverse[ length - 1 - i ] ;
        reverse[ length - 1 - i ] = temp ;

        
    }//end for
    
    

}//end function reverseString