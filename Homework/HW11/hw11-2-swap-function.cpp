#include <stdio.h>

void swap_age( int *age1,int *age2 ){
    int temp = *age1;
    *age1 = *age2;
    *age2 = temp;
}

int main() {

    char name1[ 100 ],name2[100] ;
    int age1, age2 ;

    printf( "Name : " ) ;
    scanf( "%s",name1 ) ;
    printf( "Age : " ) ;
    scanf( "%d", &age1 ) ;

    printf( "Name : " ) ;
    scanf( "%s",name2 ) ;
    printf( "Age : " ) ;
    scanf( "%d", &age2 ) ;

    printf( "\n** RESULT **\n" ) ;
    printf( "Name: %s (%d)\n", name1, age1 ) ; 
    printf( "Name: %s (%d)\n", name2, age2 ) ;



    swap_age( &age1, &age2 ); 


    printf( "\n** SWAP AGE **\n" ) ;
    printf( "Name: %s (%d)\n", name1, age1 ) ; 
    printf( "Name: %s (%d)\n", name2, age2 ) ;


    return 0 ;

}//end function