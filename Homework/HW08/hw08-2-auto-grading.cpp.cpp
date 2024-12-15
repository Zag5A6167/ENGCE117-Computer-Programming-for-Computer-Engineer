// F Score < 50
// D 50 <=  Score < 55
// D+ 55 <= Score < 60
// C 60 <=  Score < 65
// C+ 65 <= Score < 70
// B 70 <=  Score < 75  
// B+ 75 <= Score < 80
// A        Score >= 80

#include <stdio.h>

int main() {
    int score ;
    printf( "enter score : " ) ;
    scanf( "%d", &score ) ;
    
    for (; score < 50; ) {
        printf("F !\n") ;
        break ;

    }//end for
    for (; score >= 50 && score < 55; ) {
        printf("D !\n") ;
        break ;

    }//end for
    for (; score >= 55 && score < 60; ) {
        printf("D+ !\n") ;
        break ;

    }//end for
    for (; score >= 60 && score < 65; ) {
        printf("C !\n") ;
        break ;

    }//end for
    for (; score >= 65 && score < 70; ) {
        printf("C+ !\n") ;
        break ;

    }//end for
    for (; score >= 70 && score < 75; ) {
        printf("B !\n") ;
        break ;

    }//end for
    for (; score >= 75 && score < 80; ) {
        printf("B+ !\n") ;
        break ;

    }//end for
    for (; score >= 80; ) {
        printf("A !\n") ;
        break ;

    }//end for
    return 0 ;

}//end function