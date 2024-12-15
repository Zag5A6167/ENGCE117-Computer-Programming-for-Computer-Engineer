#include <stdio.h>
#include <stdlib.h>

int GetSet( int [] ) ; 

int main() {
    int *data, num ;
    data = new int[ num ] ;
    num = GetSet( data ) ; 

    printf( "\n" );
    printf( "Number of elements: %d\n",num );
    for( int i = 0 ; i < num ;i++ ) {
        printf( "%d ",data[ i ] ) ;
    }//end for



    
    
    delete[] data ; 
    return 0 ;


}//end function

/** 
  Function Name : GetSet
  @Param Input arr[] int  data array
  @Param Input size  int  num size of array
 
**/


int GetSet( int data[] ) {
    int size ;
    printf("Enter the number of elements: ");
    scanf( "%d", &size ) ;

    
    printf("Enter the elements: ");
    for( int i = 0 ; i < size; i++ ) {
        scanf( "%d", &data[ i ] ) ;
           
    }//end for
 
    
    
    return size ;
    
}//end function




    
