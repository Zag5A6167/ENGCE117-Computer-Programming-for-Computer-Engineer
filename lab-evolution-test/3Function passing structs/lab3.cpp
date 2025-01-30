#include <stdio.h>

struct student {
    char Name[ 20 ] ;
    int Age ;
} typedef SS ;

SS ( *GetStudent( int * ) )[ 4 ] ;
void PrintStudent( SS *, int N ) ;

int main() {    
    SS ( *children )[ 4 ] ;
    int group ;
    children = GetStudent( &group ) ;
    // PrintStudent( *children, group ) ;
    return 0 ;
}//end function



SS ( *GetStudent( int *room ) )[ 4 ] {
    static struct student children[20][4];
    printf("Enter Group : ");
    scanf("%d",room);
    
    for (int i = 0; i < *room; i++)
    {
        printf("Class %d : \n", i+1);
        for (int j = 0; j < 4; j++)
        {
            printf("[%d/4] Enter Student Info (Name Age) : ",j+1);
            scanf("%s %d",&children[i][j].Name,&children[i][j].Age);
        }
        
    }
    
    return children;
   
}



// void PrintStudent( SS (*children)[4], int N ) {
//     for (int i = 0; i < N; i++)
//     {
//         printf("Class%d\n", i + 1);
//         for (int j = 0; i < 4; i++)
//         {
//             printf("%s %d", children[i][j].Name,children[i][j].Age);
//         }
        
//     }
    
// }



