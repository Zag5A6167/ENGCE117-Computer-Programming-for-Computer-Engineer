#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *file ;
    char name[ 20 ] ;
    int age ;
    float grade ;
    float highGrade = 0 ;
    char  namehighGrade[ 20 ] ;
    char sex[ 10 ] ;

    file = fopen( "a15-4.txt", "r" ) ;
    if (file  == NULL ) {
        printf( "Can't open" ) ;
        exit( 0 ) ;

    }//end if
    

    while( !feof( file ) ) {
    fscanf( file,"%s %d %f %s", name, &age, &grade, sex ) ;
       if( grade > highGrade ) {
            highGrade = grade ;
            strcpy( namehighGrade, name ) ;

       }//end if
        
    }//end while

    

    printf( "%s, Grade %.2f", namehighGrade, highGrade ) ;
    return 0 ;

}//end function