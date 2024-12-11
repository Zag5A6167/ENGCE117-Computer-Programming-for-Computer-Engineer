/*
    จงเขียนโปรแกรมเพื่อสร้างฟังก์ชัน BinarySearch ให้สมบูรณ์

    Test case:

    Output:
        Found in 4

*/

#include <stdio.h>

int BinarySearch( int data[], int n, int find ) ;

int main() {
    int RealData[ 6 ] = { 1, 2, 4, 5, 8, 9 } ;
    printf( "Found in %d\n", BinarySearch( RealData, 6, 8 ) ) ;
    return 0 ;
}//end function

int BinarySearch( int data[], int n, int find ) {
    int Output = -1 ;
    //--| YOUR CODE HERE
    //TODO: #23 Complete your code, Binary Search with Pass by value.
    int high = n ;
    int low = 0 ;
    
    while ( low <= high ) {
        int mid  = low + ( high - low ) / 2 ;
        if (data[ mid ] == find ) {
            return mid ;
        }
        if ( data[ mid ] < find )
        {
           low = mid + 1 ;
        }
        else {
           high = mid - 1 ;
        }
        
        
        
    }
    
    

    return Output ;
}