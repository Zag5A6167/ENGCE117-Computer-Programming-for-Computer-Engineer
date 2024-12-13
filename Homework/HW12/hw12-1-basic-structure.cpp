#include <stdio.h>

struct Person {
    char  Name[ 20 ] ;
    int   Age ;
    char   Sex ;
    float Score ;
} ;

int main() {

    struct Person personA ;
    struct Person personB ;

    
    printf( "Person A\n" ) ;
    printf( "Name : " ) ;
    scanf( "%s", personA.Name ) ; 
    printf( "Age : " ) ;
    scanf( "%d", &personA.Age ) ;
    printf( "Sex : " ) ;
    scanf( " %c", &personA.Sex ) ;
    printf("Score : ");
    scanf( "%f", &personA.Score ) ;

    printf( "\n" ) ;

    printf( "Person B\n" ) ;
    printf( "Name : " ) ;
    scanf( "%s", personB.Name ) ;   
    printf( "Age : " ) ;
    scanf( "%d", &personB.Age ) ;
    printf( "Sex : " ) ;
    scanf( " %c", &personB.Sex ) ;
    printf( "Score : " ) ;
    scanf( "%f", &personB.Score ) ;




    printf( "\n--| Person A Information |--\n" ) ;
    printf( "Name : %s (%c)\n", personA.Name, personA.Sex ) ;
    printf( "Age : %d years old\n", personA.Age ) ;
    printf( "Score : %.2f points\n", personA.Score ) ;

    printf( "\n--| Person B Information |--\n" ) ;
    printf( "Name : %s (%c)\n", personB.Name, personB.Sex ) ;
    printf( "Age : %d years old\n", personB.Age ) ;
    printf( "Score : %.2f points\n", personB.Score ) ;



    return 0;

}//end function