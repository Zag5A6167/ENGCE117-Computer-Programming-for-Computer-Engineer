#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[ 30 ] ;
    int age ;
    char salary[30] ;
    char job[ 30 ] ;
} ;

int main() {
    FILE *fp ;
    struct Person people[ 100 ] ;
    int count = 0 ;
   
   
    fp = fopen( "a15-6.txt", "r" ) ;

    if ( fp == NULL ) {
        printf( "Error opening file!\n" ) ;
        return 1 ;
    }

    fscanf(fp, "%*[^\n]\n"); //skill header line
    while (fscanf(fp, "%s %d %s %s", people[count].name, &people[count].age, people[count].salary, people[count].job) != EOF) {
      

        count++;
    }

   
 
    
    printf("\n");
    for(int i = 0 ; i < count;i++){
        printf("%s ",people[i].name);
    }
    printf("\n");

    for(int i = 0 ; i < count;i++){
        printf("%d ",people[i].age);
    }
    printf("\n");


       for(int i = 0 ; i < count;i++){
        printf("%s ",people[i].salary);
    }
    printf("\n");


    for(int i = 0 ; i < count;i++){
        printf("%s ",people[i].job);
    }
    printf("\n");

    


    fclose( fp ) ;
    return 0;
}