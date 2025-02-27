/*
    จงแปลงตัวเลขที่ผู้ใช้ป้อนเข้ามาให้กลายเป็นตัวหนังสือ เช่น ผู้ใช้กรอกว่า 3 ให้แสดงผลลัพธ์ว่า Three
    (กำหนดให้สามารถกรอกเลขได้แค่ 0 ถึง 30 เท่านั้น)
    (กำหนดให้ใช้คำสั่ง switch case เท่านั้น)
    
    Test case:
        User input :
            12
    Output:
        Twelve

    Test case:
        User input :
            4
    Output:
        Four
*/

#include <stdio.h>

int main() {

    int inputNumber;
    scanf( "%d",&inputNumber ) ;

    switch ( inputNumber )
    {
    case 0:
        printf( "Zero\n" ) ;
        break ;
    case 1:
        printf( "One\n" ) ;
        break ;
    case 2:
        printf( "Two\n" ) ;
        break ;
    case 3:
        printf( "Three\n" ) ;
        break ; 
    case 4:
        printf( "Four\n" ) ;
        break ;
    case 5:
        printf( "Five\n" ) ;
        break ;
    case 6:
        printf( "Six\n" ) ;
        break ;
    case 7:
        printf( "Seven\n" ) ;
        break ;
    case 8:
        printf( "Eight\n" ) ;
        break ;
    case 9:
        printf( "Nine\n" ) ;
        break ;
    case 10:
        printf( "Ten\n" ) ;
        break ;
    case 11:
        printf( "Eleven\n" ) ;
        break ;
    case 12:
        printf( "Twelve\n" ) ;
        break ;
    case 13:
        printf( "Thirteen\n") ;
        break ;
    case 14:
        printf( "Fourteen\n" ) ;
        break ;
    case 15:
        printf( "Fifteen\n" ) ;
        break ;
    case 16:
        printf( "Sixteen\n" ) ;
        break ;
    case 17:
        printf( "Seventeen\n" ) ;
        break ; 
    case 18:
        printf( "Eighteen\n" ) ;
        break ;
    case 19:
        printf( "Nineteen\n" ) ;
        break ;
    case 20:
        printf( "Twenty\n" ) ;
        break ;
    case 21:
        printf( "Twenty-One\n" ) ;
        break ;
    case 22:
        printf( "Twenty-Two\n" ) ;
        break ;
    case 23:
        printf( "Twenty-Three\n" ) ;
        break ;
    case 24:
        printf( "Twenty-Four\n" ) ;
        break ;
    case 25:
        printf( "Twenty-Five\n" ) ;
        break ;
    case 26:
        printf( "Twenty-Six\n" ) ;
        break ;
    case 27:
        printf( "Twenty-Seven\n" ) ;
        break ;
    case 28:
        printf( "Twenty-Eight\n" ) ;
        break ;
    case 29:
        printf( "Twenty-Nine\n" ) ;
        break ;
    case 30:
        printf( "Thirty\n" ) ;
        break ; 
    
    default:
        printf( "Input number again between 0 - 30\n" ) ;
        break ;
    }//end switch case


    return 0;
}//end function 

