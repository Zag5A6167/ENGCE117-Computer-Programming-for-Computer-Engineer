#include <stdio.h>


int main() {

    int start ; 
    int end ;
   
    printf( "Start : " ) ;
    scanf( "%d",&start ) ;
    printf( "\nEnd : " ) ;
    scanf( "%d", &end ) ;
    int i = start ;
    
    while( i <= end ) {            // i = 3     end = 5
        int j = 1 ;
        
        while( j <= 9 ) {
            int sum = i * j ;
            printf("%d x %d = %d\n", i, j, sum ) ;
            j++;

        }//while    
        printf( "\n" ) ;
        i++ ;
    }//end while
    
    
    
    

    return 0 ;

}//end function