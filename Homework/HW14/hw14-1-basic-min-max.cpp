#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void randArr( int [], int ) ;
int findMax( int [], int ) ;
int findMin( int [], int ) ;
int main() {
    int n ;  
 
    scanf( "%d", &n ) ;
    
    int arr[ n ] ;
  
    randArr( arr, n ) ;
   
    int minVal =  findMin( arr, n ) ;
    int maxVal =  findMax( arr, n ) ;



     printf( "\nIndex : " ) ;
    for(int i = 0 ; i < n ; i++ ){
        printf( "%d ", i ) ;

    }//end for

    printf( "\nArray : " ) ;
    for(int i = 0 ; i < n ; i++ ){
        printf( "%d ", arr[ i ] ) ;

    }//end for
    printf( "\n" ) ; 


    printf( "Min = %d\n", minVal ) ;
    printf( "Max = %d\n", maxVal ) ;


    return 0 ;
}//end funtion
void randArr( int inputArr[ ], int n ) {
    int i = 0 ;
    srand( time( NULL ) ) ;
    for( i = 0 ; i < n ; i++ ){
        inputArr[ i ] = rand() % 90 + 10 ;

    }//end for
}//end function


   

int findMax( int arr[ ], int n ) {
   
    int Max = -100 ;
    for( int i = 0 ; i < n ; i++ )
        if( arr[ i ] > Max ) {
            Max = arr[ i ] ;
           
        }//end if
        return Max ;
}//end function
int findMin( int arr[ ], int n ) {
   
    int Min = 100 ;
    for( int i = 0 ; i < n ; i++ )
        if( arr[ i ] < Min ) {
            Min = arr[ i ] ;
           
        }//end if

        return Min ;

}//end function