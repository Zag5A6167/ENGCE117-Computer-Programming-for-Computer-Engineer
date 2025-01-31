#include <stdio.h>

int SumLoop( int ) ;
int SumRecur( int ) ;
void TowerHanoi( int m, int i, int j ) ;

int main() {
    int n = 0, m = 0, i = 0, j = 0 ;
    scanf( "%d %d %d %d", &n, &m, &i, &j ) ;
    printf( "%d\n", SumLoop( n ) ) ;
    printf( "%d\n", SumRecur( n ) ) ;
    TowerHanoi( m, i, j ) ;
    return 0 ;
}//end function

int SumLoop( int n ) {
    int sum = 0 ;
  for(int i = 1;i <= n;i++){
    sum += i;
  }
  return sum;
}

int SumRecur( int n ) {
  if( n == 0 ) {
    return 0 ;
  }else {
    return n + SumRecur( n-1 ) ;
  }
}//end function

void TowerHanoi( int m, int i, int j ) {
    if( m > 0 ){
        int k = 6 - i - j ;
        TowerHanoi(m-1,i,k ) ;
        printf("Move disc %d from %d to %d\n",m,i,j ) ;
        TowerHanoi( m-1,k,j ) ;
    }
}//end function