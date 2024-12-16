#include <stdio.h>

struct student{

    char name[ 20 ] ;
    int age ;
};



void GetStudent( struct student child[2][ 10 ] ) ;

int main() {
    struct student children[ 2 ][ 10 ] ;
    
    GetStudent( children ) ;

 

  

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


 

/////////////////////
//a /a  / b /c  /   /   /  /
/////////////////////