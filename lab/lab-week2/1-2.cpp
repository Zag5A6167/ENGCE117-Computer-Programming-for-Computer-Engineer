#include <stdio.h>
#include <stdlib.h>

void GetSet( int *[], int * ) ;

int main() {

    int *data, num ;
    GetSet( &data, &num ) ;


    free( data ) ;
    return 0 ;

}//end function



/** 
  Function Name : GetSet
  @Param Input data[] int  data element of array
  @Param Input *num   int  num size of data
 
**/

void GetSet( int *data[], int *num ) {
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", num ) ;
    *data = (int*)malloc( *num * sizeof( int ) ) ;
    for( int i = 0 ; i < *num;i++ ){
        scanf("%d", &( *data )[ i ] ) ;
        
    }//end for

 
}//end function GetSet
