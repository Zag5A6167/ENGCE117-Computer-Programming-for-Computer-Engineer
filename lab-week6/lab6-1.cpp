// #include <stdio.h>
// #include <string.h>

// struct studentNode {
//     char name[ 20 ] ;
//     int age ;
//     char sex ;
//     float gpa ;
//     struct studentNode *next ;
//     struct studentNode *back ;
// } ;

// void ShowAll( struct studentNode *walk ) ;
// struct studentNode *AddNode( struct studentNode **walk, char name[], int age, char sex, float gpa ) ;
// void InsNode( struct studentNode *walk, char name[], int age, char sex, float gpa, struct studentNode **begin ) ;


// int main() {
//     struct studentNode *start, *now ;
//     start = NULL ;
//     now = AddNode( &start, "one", 6, 'M', 3.11 ) ; ShowAll( start ) ;
//     now = AddNode( &start, "two", 8, 'F', 3.22 ) ; ShowAll( start ) ;
//     InsNode( now, "three", 10, 'M', 3.33, &start ) ; ShowAll( start ) ;
//     InsNode( now, "four", 12, 'F', 3.44, &start ) ; ShowAll( start ) ;


    
//     // GoBack( &now ) ;
//     // DelNode( &now, &start ) ; ShowAll( start ) ;
//     // DelNode( &now, &start ) ; ShowAll( start ) ;
//     // DelNode( &now, &start ) ; ShowAll( start ) ;
//     return 0 ;
// }//end function

// void ShowAll( struct studentNode *walk ) {
//     while( walk != NULL ) {
//         printf( "%s ", walk->name ) ;
//         walk = walk->next ;
//     }//end while
//     printf( "\n" ) ;
// }//end function



// struct studentNode *AddNode( struct studentNode **start, char n[], int a,char s, float g) {
//     struct studentNode *temp = NULL ;
//     while( *start != NULL) {
//         temp = *walk;
//         walk = &(*walk)->next ;

//     }//end while

//     *walk = new studentNode ;

//     strcpy( (*walk)->name, n ) ;
//     (*walk)->age = a ;
//     (*walk)->sex = s;
//     (*walk)->gpa = g ;
    
//     (*walk)->back = temp;

//     (*walk)->next = NULL ;

//     return *walk;
// }//end fucntion


// void InsNode( struct studentNode *walk, char name[], int age, char sex, float gpa, struct studentNode **begin ) {
//     if( walk->back != NULL ) {
//         walk->back->next = new struct studentNode ;
//         strcpy( walk->back->next->name, name ) ;
//         walk->back->next->age = age ;
//         walk->back->next->sex = sex ;
//         walk->back->next->gpa = gpa ;
//         walk->back->next->next = walk ;
//         walk->back->next->back = walk->back ;
//         walk->back = walk->back->next ;
       
//     }else{
//         *begin = new struct studentNode ;
//         (*begin)->age = age ;
//         (*begin)->sex = sex ;
//         (*begin)->gpa = gpa ;
//         (*begin)->next = walk ;
//         (*begin)->next = NULL ;
//         walk->back = *begin ;
      
//     }//end if

// }//end function


// void DelNode(struct studentNode **walk ) {
//     struct studentNode *temp;
//     temp = (*walk)->next->next ;

//     (*walk)->next = temp ;
    
    
// }