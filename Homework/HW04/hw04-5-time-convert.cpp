/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"
    
    Test case:
        Input Days : 
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days : 
            27
    Output:
        27 days = 2332800 seconds
*/



#include <stdio.h>

int main() {
    int days ;
    int dayOfHour = 24 ;
    int hourOfMinute = 60 ;
    int minuteOfSecond = 60 ;
    int result = 0 ;

    printf( "Input Days : " ) ;
    scanf( "%d", &days ) ;

    result = days * dayOfHour * hourOfMinute * minuteOfSecond ;

    printf("%d days = %d seconds", days, result );




    return 0;
}//end function

// Test case OK