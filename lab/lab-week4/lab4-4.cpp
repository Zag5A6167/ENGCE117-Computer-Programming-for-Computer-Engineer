#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
};

void saveNode( struct studentNode *child, char n[], int a, char s, float g ) ;
void goNext1( struct studentNode **walk ) ;

int main() {
    struct studentNode *start, *now1, **now2 ;
    start = new struct studentNode ;
    saveNode( start, "one", 6, 'M', 3.11 ) ;

    start->next = new struct studentNode ;
    saveNode( start->next, "two", 8, 'F', 3.22 ) ;

    start->next->next = new struct studentNode ;
    saveNode( start->next->next, "three", 10, 'M', 3.33 ) ;

    start->next->next->next = new struct studentNode ;
    saveNode( start->next->next->next, "four", 12, 'F', 3.44 ) ;

    now1 = start ;
    now2 = &start ;

    goNext1( &now1 ) ;
    printf( "now1 = %s \n", now1->name ) ;


    // printf( "now2 = %s ",(*now2)->name ); 

    return 0 ;
}

void saveNode( struct studentNode *child, char n[], int a, char s, float g ) {
    strcpy( child->name, n ) ;
    child->age = a ;
    child->sex = s ;
    child->gpa = g ;
}


void goNext1( struct studentNode **walk ) {
    *walk = (*walk)->next ;
}