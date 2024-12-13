#include <stdio.h>

int main() {
    int userInput ;
    bool primeCheck ; 
    scanf("%d", &userInput ) ;
    int i = userInput ;
    
    
    do{
        primeCheck = true ;
        int j = 2 ;
        while( j * j <= i ){
            if( i % j == 0 ) {
                primeCheck = false ;
                break ;

            }//end if

            j++ ;
        }//end  while

        if ( primeCheck ) {
            printf( "%d ",i ) ;

        }//end if
        i-- ; 
    }while( i > 1 ) ;




    

    return 0;
}//end funtion


