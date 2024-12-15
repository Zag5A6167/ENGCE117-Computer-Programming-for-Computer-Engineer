#include <stdio.h>

struct student{
    char name[ 20 ] ;
    int age ;
};


struct student (*GetStudent( int *room ) )[ 10 ] ;


int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;



    
    return 0 ;
}//end function



struct student (*GetStudent( int *room ) )[ 10 ]{
    static struct student children[20][10];
    scanf( "%d", room ) ;
    
    for (int i = 0; i < *room; i++) {
       printf("Room %d:\n",i+1);
       for (int j = 0; j < 10; j++) {
            printf("Student %d: ",j+1);
            scanf("%s %d",&children[i][j].name,&children[i][j].age);
       }
       


    }


    return children ;
       
}
