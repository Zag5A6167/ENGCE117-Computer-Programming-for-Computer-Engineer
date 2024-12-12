#include <stdio.h>


int main() {

    
 
    int n ;
    scanf("%d", &n) ;
    int userInput = n ;
    int count = 1 ;
    while( n > 0 ) {            
        
        printf( "%c%d%c Hello World\n", userInput % 2 ? '[' : '(', count, userInput % 2 ? ']' : ')' ) ;
        count += 1 ;
        n-- ;
    
    }//end while
    
    
    
    

    return 0 ;

}//end function
















