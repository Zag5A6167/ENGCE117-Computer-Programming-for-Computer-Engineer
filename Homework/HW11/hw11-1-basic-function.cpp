#include <stdio.h>

int add_numbers( int a, int b, int c ) {
    int sum = a + b + c ;
    return sum ;

}

int main() {

    int n1, n2, n3 ; 
    scanf( "%d", &n1 ) ;
    scanf( "%d", &n2 ) ;
    scanf( "%d", &n3 ) ; 

    int sum = add_numbers( n1, n2, n3 ) ;

    printf( "Summation = %d (Calculate by add_numbers function)\n", sum ) ;




    return 0 ;

}//end function