#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void upgrade( struct student *child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'F' ;
    aboy.gpa = 2.58 ;
    upgrade( &aboy ) ;
    printf( "%.2f", aboy.gpa ) ;
    return 0 ;
}//end function


void upgrade( struct student *child ) {

    if( ( *child ).gpa == 4.00 ) {              // =  4.00 dont cal
        return ;

    }//end if
    else if( ( *child ).gpa == 0.00 ) {        // =  0.00 dont cal   
        return ;    

    }//end else if

    if ( ( *child ).sex == 'M' ) {
        ( *child ).gpa += ( *child ).gpa * 0.1 ;   // for male 10%
        
    }//end if
    else if( ( *child ).sex == 'F' ) {
        ( *child ).gpa += ( *child ).gpa * 0.2 ;  // for female 20%
    }//end if 
    
    
    // printf("in upgrade func gpa is = %.2f\n", ( *child ).gpa ) ;
    

   
}//end function upgrade