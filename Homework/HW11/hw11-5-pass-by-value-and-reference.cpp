#include <stdio.h>

void findHeight( int target ) ;
void findAge( int *target ) ;

int main() {
    int maxHeight = 191 ;
    int maxAge;
    findHeight( maxHeight ) ;

    findAge( &maxAge ) ;
    printf( "Max age = %d", maxAge ) ; 


    return 0 ; 
}//end function main

void findHeight( int target ) {
    int Height[ 10 ] = { 159, 168, 191, 188, 154, 152, 167, 165, 178, 177 } ;
    for ( int i = 0; i < 10; i++ ) {

       if( Height[ i ] == target ) {
            printf( "Max height = %d\n", Height[ i ] ) ;
            break;

       }//end if
    }//end for
    
}//end functionHeight



void findAge( int *target ) {
    *target = 19 ;
    int Age[ 10 ] = { 18, 19, 18, 17, 16, 18, 17, 18, 18, 18 } ;

    
}//end function findAge
