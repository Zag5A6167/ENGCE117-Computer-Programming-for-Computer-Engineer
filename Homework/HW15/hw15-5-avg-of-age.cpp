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
    float sumAge = 0 ;
    float averageAge ;
    char salaryFromTxt[20] ;
   
    fp = fopen( "a15-5.txt", "r" ) ;

    if ( fp == NULL ) {
        printf( "Error opening file!\n" ) ;
        return 1 ;
    }

    fscanf(fp, "%*[^\n]\n"); //skill header line
    while (fscanf(fp, "%s %d %s %s", people[count].name, &people[count].age, people[count].salary, people[count].job) != EOF) {
       
        sumAge += people[count].age;
        count++;
    }

    averageAge = sumAge / count ;


    printf("Average : %.2f",averageAge);


    for(int i = 0; i < count - 1; i++){
        for (int j = 0; j < count - i - 1; j++) {
            if(people[j].age < people[j + 1].age){
                struct Person temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
        
    }

    printf( "\n%s(%d) : %s Bath",people[ 0 ].name,people[ 0 ].age,people[ 0 ].salary ) ;
    printf( "\n%s(%d) : %s Bath",people[ 1 ].name,people[ 1 ].age,people[ 1 ].salary ) ;
    printf( "\n%s(%d) : %s Bath",people[ 2 ].name,people[ 2 ].age,people[ 2 ].salary ) ;

   







    // //print 
    // printf("\n");
    // for(int i = 0 ; i < count;i++){
    //     printf("%s ",people[i].name);
    // }
    // printf("\n");

    // for(int i = 0 ; i < count;i++){
    //     printf("%d ",people[i].age);
    // }
    // printf("\n");


    //    for(int i = 0 ; i < count;i++){
    //     printf("%s ",people[i].salary);
    // }
    // printf("\n");


    // for(int i = 0 ; i < count;i++){
    //     printf("%s ",people[i].job);
    // }
    // printf("\n");

    










    fclose( fp ) ;
    return 0;
}