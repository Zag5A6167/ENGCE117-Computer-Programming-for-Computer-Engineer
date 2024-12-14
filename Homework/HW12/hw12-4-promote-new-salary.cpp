#include <stdio.h>
#include <string.h>

struct Employee {
    char  Name[ 30 ] ;
    int   exp ;
} ;



int main() {    
    struct Employee employees[ 100 ] ;
    int count[ 7 ] = {0, 0, 0, 0, 0, 0, 0 } ;
    //                1 1.2 1.4 1.6 1.8 2
    
    char choice ;
    int index = 0 ;
    int indexHighSalaryName = 0 ;
    int indexLowSalaryName = 0 ;
    int size = 10;
    char highSalaryName[ size ][ size ] ;
    char lowSalaryName[ size ][ size ] ;
    while( 1 ) {
 
        printf( "Employee %d Name : ", index + 1 ) ;
        scanf( "%s",employees[ index ].Name ) ;

        if ( strcmp( employees[ index ].Name, "-1" ) == 0 ) {
            break; 
        }//end if

        printf( "EXP : " ) ;
        scanf( "%d", &employees[ index ].exp ) ;

        if ( employees[ index ].exp >= 0 && employees[ index ].exp <= 1000 ) {
            count[ 0 ] += 1 ; //x1
            strncpy( lowSalaryName[ indexLowSalaryName ], employees[ index ].Name, size - 1 ) ; 
            lowSalaryName[ indexLowSalaryName ][ size - 1 ] = '\0' ;
            indexLowSalaryName += 1 ;
        }//end  if
        else if ( employees[ index ].exp > 1000 && employees[ index ].exp <= 2000 ) {
            count[1] += 1 ;    //x1.2
        }//end else if
        else if ( employees[ index ].exp > 2000 && employees[ index ].exp <= 3000 ) {
            count[2] += 1 ; //1.4
        }//end else if 
        else if ( employees[ index ].exp > 3000 && employees[ index ].exp <= 4000 ) {
            count[ 3 ] += 1 ; //1.6
        }//end else if
        else if ( employees[ index ].exp > 4000 && employees[ index ].exp <= 5000 ) {
            count[4] += 1 ;//1.8
        }//end else if
        else if( employees[ index ].exp > 5000 ) {
            count[5] += 1 ; //2.0
            strncpy(highSalaryName[indexHighSalaryName], employees[index].Name, size - 1) ; 
            highSalaryName[indexHighSalaryName][size - 1] = '\0' ;
            indexHighSalaryName += 1 ;
        }//end else if


        index++ ;
    }//end while


    printf( "\n**** Salary Result ****\n" ) ;
    printf( "x1.0 count %d\n",count[ 0 ] ) ;
    printf( "x1.2 count %d\n",count[ 1 ] ) ;
    printf( "x1.4 count %d\n",count[ 2 ] ) ;
    printf( "x1.6 count %d\n",count[ 3 ] ) ;
    printf( "x1.8 count %d\n",count[ 4 ] ) ;
    printf( "x2.0 count %d\n",count[ 5 ] ) ;
    

    printf("The Employee get x2.0 is %s\n", highSalaryName[ 0 ] ) ;
    printf("The Employee get x1.0 is %s", lowSalaryName[ 0 ] ) ;
    return 0 ;
}//end function