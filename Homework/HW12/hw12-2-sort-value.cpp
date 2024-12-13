#include <stdio.h>

struct Student {
    char  Name[ 30 ] ;
    int   Age ;
    char   Sex ;
    float Score ;
} ;

int main() {
    char letter[ 4 ] = {'A','B','C','D' } ;
    struct Student students[ 4 ] ;

    for ( int i = 0; i < 4; i++ ) {
        printf( "Student %c\n", letter[ i ]  ) ;
        printf( "Name : " ) ;
        scanf( "%s", students[ i ].Name ) ;
        printf( "Score : " ) ;
        scanf( "%f", &students[ i ].Score ) ;
        printf( "\n" ) ;
    }//end for
    

    for( int i  = 0 ;i < 3; i++ ) {
        for ( int j = 0; j < 3 - i; j++ ) {
            if( students[ j ].Score < students[ j + 1 ].Score ) {
                struct Student temp = students[ j ] ;
                students[ j ] = students[ j + 1 ] ;
                students[ j + 1 ] = temp ;

            }//end if

        }//end for
        
    }//end for









    for ( int i = 0; i < 4 ; i++ ) {
        printf( "%s ",students[ i ].Name ) ;

    }
    printf( "\n" ) ;
    
    for ( int i = 0; i < 4; i++ ) {
        printf( "%.2f ", students[ i ].Score ) ;

    }//end for
    

    

    return 0;

}//end function