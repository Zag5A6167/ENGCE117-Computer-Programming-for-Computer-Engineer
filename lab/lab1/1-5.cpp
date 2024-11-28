#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    GetMatrix( &data, &m, &n ) ;
    return 0 ;
}//end function


void GetMatrix(int value[],int *row, int *col){
    printf("Enter the number of rows: ");
    scanf("%d", row)
}



