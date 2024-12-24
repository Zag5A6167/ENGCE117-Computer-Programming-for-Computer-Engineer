#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

void showAll( struct studentNode **walk ) ;
void InsNode( struct studentNode **walk, char n[], int a,char s, float g ) ;
void DelNode(struct studentNode **walk ) ;
void goNext( struct studentNode ***walk ) ;

int main() {
    struct studentNode *start, **now ;
    start = NULL ; 
    now = &start ;

    InsNode( now, "one", 6, 'M', 3.11 ) ; 
    showAll( &start ) ;

    InsNode( now, "two", 8, 'F', 3.22 ) ; 
    showAll( &start ) ;

    goNext( &now ) ;

    InsNode( now, "three", 10, 'M', 3.33 ) ; 
    showAll( &start ) ;

    InsNode( now, "four", 12, 'F', 3.44 ) ; 
    showAll( &start ) ;

    goNext( &now ) ;
    DelNode( now ) ;
     showAll( &start ) ;


    return 0 ;
}//end function

void showAll( struct studentNode **walk ) {
    while( *walk != NULL ) {
        printf( "%s ", (*walk)->name ) ;
        walk = &(*walk)->next ;
    }//end while
    // printf( " " ) ;

    printf( "\n" ) ;
}//end function






void InsNode( struct studentNode **walk, char n[], int a,char s, float g ) {
    struct studentNode *temp = new struct studentNode ;
    strcpy( temp->name, n ) ;
    temp->age = a ;
    temp->sex = s ;
    temp->gpa = g ;

    temp->next = *walk ;
    *walk = temp ;

 
}





void DelNode(struct studentNode **walk ) {
    struct studentNode *temp;
    temp = (*walk)->next->next ;

    (*walk)->next = temp ;
    
    
}



