#include <stdio.h>

int main() {

    int n ;
    int i =  1 ;
    int sum = 0 ;
    int value = 9;
    scanf( "%d", &n ) ;
    
    while (i <= n)
    {
        sum += value;
        printf( "%d", value ) ;

        if(i < n){
            printf(" + ");
        }//end if

        value = value * 10 + 9;

        i++ ;
    }//end while
    
    printf("\n") ;
    printf( "Sum = %d ", sum ) ;

    return 0 ;

}//end function




