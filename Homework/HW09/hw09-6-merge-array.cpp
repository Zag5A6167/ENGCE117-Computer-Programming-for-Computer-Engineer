#include <stdio.h>
#include <stdlib.h>

int main() {
     int i, j, k ;
    int arr1Size ;
    int arr2Size ;

    
    printf( "Enter element of Array1 : " ) ;
    scanf( "%d", &arr1Size ) ;

    int *arr1 = ( int* )malloc( arr1Size * sizeof( int ) ) ;
    
  
    for (int i = 0; i < arr1Size; i++ ) {
        printf( "--| Array1 [%d] : ",i );
        scanf( "%d", &arr1[ i ] ) ;
       
    }//end for
   


    printf( "Enter element of Array2 : " ) ;
    scanf( "%d", &arr2Size ) ;

    int *arr2 = ( int* )malloc( arr2Size * sizeof( int ) ) ;
    
  
    for (int i = 0; i < arr2Size; i++ ) {
        printf( "--| Array2 [%d] : ",i );
        scanf( "%d", &arr2[ i ] ) ;
       
    }//end for

    int arr3Size = arr1Size + arr2Size ;
    int *arr3 = ( int* )malloc( arr3Size * sizeof( int ) ) ;    
    
   
    for ( i = 0; i < arr1Size; i++ ) {
        arr3[i] = arr1[i];
    }//end for
    for ( j = 0; j < arr2Size; j++ ) {
        arr3[ i + j ] = arr2[ j ] ;
    }//end for

   
    
    for (i = 0; i < arr3Size - 1; i++) {
        for (j = i + 1; j < arr3Size; j++) {
            if (arr3[i] < arr3[j]) {
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;

            }//end if
        }//end for
    }//end for

     

    
    printf( "Output:\n" ) ;
    printf( "Merged Array1 & Array2 to Array3:\n" ) ;
    printf( "Array3 = " ) ;
    for ( k = 0; k < arr3Size; k++ ) {
        printf("%d ", arr3[ k ] ) ;

    }//end for



    

    free( arr1 ) ;
    free( arr2 ) ;
    free( arr3 ) ;
    return 0 ;
}//end function