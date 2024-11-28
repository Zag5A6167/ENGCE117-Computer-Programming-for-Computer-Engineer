/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/



#include <stdio.h>

int main() {

    int num1, num2, num3 ;
    int temp ;

    printf( "Input[1] : ") ;
    scanf( "%d", &num1 ) ;

    printf( "Input[2] : ") ;
    scanf( "%d", &num2 ) ;

    printf( "Input[3] : " ) ;
    scanf( "%d", &num3 ) ;

    if( num1 > num2 ) {
        temp = num1 ;
        num1 = num2 ;
        num2 = temp ;

    }//end if

    if( num1 > num3 ) {
        temp = num1 ;
        num1 = num3 ;
        num3 = temp ;

    }//end if
    
    if( num2 > num3 ) {
        temp = num2 ;
        num2 = num3 ;
        num3 = temp ;

    }//end if

    printf("%d %d %d", num3, num2, num1);

    return 0 ;
}//end function