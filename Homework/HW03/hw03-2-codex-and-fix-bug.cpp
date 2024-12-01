//TODO: #9 Fix bug and arrange code in CODEX pattern.
#include <stdio.h>
#include <conio.h>

int main() {
    float a, b = 3 ;
    bool stateBool = 0 ;
    
    
    printf( "%d\n",stateBool ) ;

    int i = 0 ;
    if( stateBool != 0 ) {
        printf( "ok\n" ) ;

    }//end if
    else{
        while( i <= 5 ) {
            printf( "not-okey-%d\n", ++i ) ;

        }//end while

    }//end else
    for(i = 3; i < 10; i++ ) {
        if( i % 2 == ( !0 ? 1 : 2 ) ) {
            printf( "see see\n" ) ;

        }//end if
        else{
            printf( "haha\n" ) ;

        }//end else

    }//end for
    return 0;
}//end function