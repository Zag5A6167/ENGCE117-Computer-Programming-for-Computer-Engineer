#include <stdio.h>
int *GetSet( int * ) ;



int main() {

    int *data, num ;    
    data = GetSet( &num ) ;


    delete[] data ;
    return 0 ;
}//end function


int *GetSet( int *num ) {
    printf("Enter the number of elements: ") ;
    scanf("%d", num ) ;
    int *data = new int[ *num ] ; 

    for ( int i = 0; i < *num; i++ ) {
        scanf("%d", &data[ i ] ) ; 
    }//end for

  
    return data ;

}//end function