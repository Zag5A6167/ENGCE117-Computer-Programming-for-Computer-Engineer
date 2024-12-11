#include <stdio.h>
int main() {

    FILE *file;
    char name[20];
    int number;
    float floatNumber;
    char gender[10];
    file = fopen("a15-3.txt", "r" ) ;

    fscanf( file, "%s", &name ) ;
    fscanf( file, "%d", &number ) ;
    fscanf( file, "%f", &floatNumber );
    fscanf( file, "%s", &gender ) ;
    printf( "%s ",name ) ;
    printf( "%d  ", number ) ;
    printf( "%.2f    ",floatNumber ) ;
    printf( "%s", gender ) ;
    
    printf( "\n" ) ;

    fscanf( file, "%s", &name ) ;
    fscanf( file, "%d", &number ) ;
    fscanf( file, "%f", &floatNumber );
    fscanf( file, "%s", &gender ) ;
    printf( "%s ",name ) ;
    printf( "%d  ", number ) ;
    printf( "%.2f    ",floatNumber ) ;
    printf( "%s", gender ) ;

    printf( "\n" ) ;

    fscanf( file, "%s", &name ) ;
    fscanf( file, "%d", &number ) ;
    fscanf( file, "%f", &floatNumber );
    fscanf( file, "%s", &gender ) ;
    printf( "%s ",name ) ;
    printf( "%d  ", number ) ;
    printf( "%.2f    ",floatNumber ) ;
    printf( "%s", gender ) ;

   
    fclose(file);
    return 0;
}//end function 