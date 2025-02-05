
#include <stdio.h>
#include <string.h>

char fisrtName[ 20 ] ;
char lastName[ 20 ] ;

int main() {

    printf( "First Name: " ) ;
    scanf( "%s",fisrtName ) ;
    printf( "Last Name: " ) ;
    scanf( "%s",lastName ) ;
    
    int len = strlen(fisrtName) ;

    if( fisrtName[ len - 1 ] == 'C' ) {
        fisrtName[ len - 1 ] = 'C' + 1 ;
    }//end if

    printf( "%s %ss TC, RMUTL, Chiang Mai, Thailand",fisrtName,lastName ) ;
        


    return 0 ;
} //end function

  









//Test case Ok
//Codex Ok
//Flowchart OK 
//Result OK