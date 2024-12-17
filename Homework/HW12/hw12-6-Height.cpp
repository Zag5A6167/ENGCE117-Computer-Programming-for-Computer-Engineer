#include <stdio.h>
#include <string.h>

struct student {
    char name[ 20 ] ;
    float height ;
} ;

void GetStudent(struct student child[][ 10 ] ) {
    int roomA = 0, roomB = 1 ;
    int indexRoomA = 0, indexRoomB = 0 ;
    printf( "Room A\n" ) ;
    while (1) { 


        printf( "Name: " ) ;
        scanf( "%s", child[ roomA ][ indexRoomA ].name ) ;

        if ( strcmp( child[ roomA ][ indexRoomA ].name, "-1" ) == 0 ) {
            break ;
        }//end if

        printf( "Height (cm): ", indexRoomA + 1 ) ;
        scanf( "%f", &child[ roomA ][ indexRoomA ].height ) ;


        indexRoomA++ ;
    }
    printf( "Room B \n" ) ;
    while (1)
    {
        ////  Room b

        printf( "Name: " ) ;
        scanf( "%s", child[ roomB ][ indexRoomB ].name ) ;

        if ( strcmp( child[ roomB ][ indexRoomB ].name, "-1" ) == 0) {
            break ;
        }//end if

        printf( "Height (cm): ", indexRoomB + 1 ) ;
        scanf( "%f", &child[ roomB ][ indexRoomB ].height ) ;
       

        indexRoomB++ ;
    }//end while
    printf( "\n" ) ;
}//end function

int main() {
    struct student children[ 2 ][ 10 ] ;
    struct student allStudent[ 20 ] ;
    int count = 0 ; // for all student
    GetStudent( children ) ;

    printf( "\n" ) ; 

    printf( "Room A -> " ) ;
    for ( int i = 0; i < 10; i++ ) {
        if ( strcmp( children[ 0 ][ i ].name, "-1" ) == 0 ) {
            break;
        }
        printf( "%s ", children[ 0 ][ i ].name ) ;
    }//end for
    
    printf( "\n" ) ;

    //////////// Room b
  
    printf( "Room B -> " ) ;
    for ( int i = 0; i < 10; i++ ) {
        if ( strcmp( children[ 1 ][ i ].name, "-1" ) == 0 ) {
            break ;
        }//end if
        printf( "%s ", children[ 1 ][ i ].name ) ;
    }//end for

    

    // every student to another array 
    for ( int i = 0; i < 2; i++ ) {
        for ( int j = 0; j < 10; j++ ) {
            if ( strcmp( children[ i ][ j ].name, "-1" ) == 0) {
                break ;
            }//end if
            allStudent[ count++ ] = children[ i ][ j ] ;
        }//end for
    }//end for

    
    for ( int i = 0; i < count - 1; i++ ) {
        for ( int j = 0; j < count - i - 1; j++ ) {
            if (allStudent[ j ].height < allStudent[ j + 1 ].height ) {
                struct student temp = allStudent[ j ] ;
                allStudent[ j ] = allStudent[ j + 1 ] ;
                allStudent[ j + 1 ] = temp ;
            }//end if
        }//end for
    }//end for

    printf( "\n" ) ;
    printf( "School ->" ) ;

    for ( int i = 0; i < count-1; i++ ) {
       printf( "%s ", allStudent[ i ].name ) ;
        
    }//end for
    
    return 0;
}

 
