#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

void showAll( struct studentNode *walk ) ;
struct studentNode *AddNode( struct studentNode **walk, char n[], int a,char s, float g ) ;
void InsNode( struct studentNode *walk, char n[], int a,char s, float g ) ;
void DelNode(struct studentNode **walk ) ;

int main() {
    struct studentNode *start, *now ;
    start = NULL ;
    now = AddNode( &start, "one", 6, 'M', 3.11 ) ; 
    showAll( start ) ;

    now = AddNode( &start, "two", 8, 'F', 3.22 ) ; 
    showAll( start ) ;

    InsNode( now, "three", 10, 'M', 3.33 ) ;
    showAll( start ) ;


    InsNode( now, "four", 12, 'F', 3.44 ) ; 
    showAll( start ) ;


    DelNode( &now ) ; 
    showAll( start ) ;


    return 0 ;
}//end function

void showAll( struct studentNode *walk ) {
    while( walk != NULL ) {
        printf( "%s ", walk->name ) ;
        walk = walk->next ;
    }//end while
    
    // printf( " " ) ;
    printf( "\n" ) ;
}//end function


struct studentNode *AddNode( struct studentNode **walk, char n[], int a,char s, float g ) {
    while( *walk != NULL) {
        walk = &(*walk)->next ;

    }//end while

    *walk = new studentNode ;

    strcpy( (*walk)->name, n ) ;
    (*walk)->age = a ;
    (*walk)->sex = s;
    (*walk)->gpa = g ;

    (*walk)->next = NULL ;

    return *walk;
}

void InsNode( struct studentNode *walk, char n[], int a,char s, float g ) {
    struct studentNode *temp;
    temp = walk->next;

    walk->next = new struct studentNode ;

    strcpy( walk->next->name, n ) ;
    walk->next->age = a ;
    walk->next->sex = s ;
    walk->next->gpa = g ;
    
    walk->next->next = temp ; 
}


void DelNode(struct studentNode **walk ) {
    struct studentNode *temp;
    temp = (*walk)->next->next ;

    (*walk)->next = temp ;
    
    
}
