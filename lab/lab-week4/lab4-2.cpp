#include <stdio.h>

void go( int ***p, int **z ) ;

int main() {
    int *b = new int ; *b = 10 ;
    int *c = new int ; *c = 20 ;
    int **a ;
    
    go( &a, &b ) ;
    printf( "in main = %d %p %p %p \n\n", **a, *a, a, &a ) ;

    go( &a, &c ) ;
    printf( "in main = %d %p %p %p \n", **a, *a, a, &a ) ;
    return 0 ;

}//end function


void go( int ***p, int **z ) {
    *p = z ;
 
    printf( "in func = %d %p %p %p \n", ***p, **p, *p, p) ;
}