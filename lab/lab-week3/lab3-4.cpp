#include <stdio.h>

struct student{

    char name[ 20 ] ;
    int age ;
};



void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    GetStudent( children, &group ) ;

    for (int i = 1; i <= group; i++) {
        printf( "Room %d: 10 students entered.\n", i ) ;

    }//end for

    return 0 ;
}//end function


void GetStudent( struct student child[][ 10 ], int *room ) {

    scanf( "%d", room ) ;
    for (int i = 0; i < *room; i++)
    {
        printf("Room %d:\n",*room);
        for (int j = 0; j < 10; j++)
        {
            printf( "Student [%d] :",j + 1 ) ;
            scanf("%s %d",&child[i][j].name,&child[i][j].age);
        }//end for
        
        printf( "\n" ) ;
        
        
        
    }//end for
    
   

}//end function