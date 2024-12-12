#include <stdio.h>

int main() {
    int userInput ;
    bool primeCheck ; 
    scanf("%d", &userInput ) ;

   

    for( int i = userInput; i > 1; i-- ) {
        
        primeCheck = true;
        
        for ( int j = 2; j * j <= i; j++ ) {
            if( i % j == 0 ) {
                primeCheck = false;
                break;

            }//end if

        }//end for
        if(primeCheck){
            printf("%d ", i );

        }//end if

    }//end for
        




    return 0;
}//end funtion
