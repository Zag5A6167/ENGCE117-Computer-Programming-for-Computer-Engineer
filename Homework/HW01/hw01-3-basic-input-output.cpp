/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/

#include <stdio.h>
#include <string.h>

char fisrtName[ 20 ] ;
char lastName[ 20 ] ;

int main() {

    printf( "First Name: " ) ;
    scanf( "%s",fisrtName ) ;
    printf( "Last Name: " ) ;
    scanf( "%s",lastName ) ;
    
    int len = strlen(fisrtName) ;

    if( fisrtName[ len - 1 ] == 'C' ){
        fisrtName[ len-1 ] = 'C' + 1 ;
    }

    printf( "%s %ss TC, RMUTL, Chiang Mai, Thailand",fisrtName,lastName ) ;
        


    return 0 ;
} //end function

  









//Test case Ok
//Codex Ok
//Flowchart OK 
//Result OK