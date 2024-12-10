#include <stdio.h>


int main() {
    int n ;
    scanf( "%d",&n ) ;
    
 
    for (int i = 1; i <= n; i++) {
        printf( "%c%d%c Hello World\n", n % 2 ? '[' : '(', i, n % 2 ? ']' : ')' ) ;
        
    }//end for
    


    return 0 ;
}//end function