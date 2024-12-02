/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับค่าจากผู้ใช้จำนวน 2 ค่า และให้เปรียบเทียบกัน
    
    Test case:
        Input 1 :
            6
        Input 2 :
            29
    Output:
        Number1 lower than Number2

    Test case:
        Input 1 :
            96
        Input 2 :
            63
    Output:
        Number1 greater than Number2

    Test case:
        Input 1 :
            50
        Input 2 :
            50
    Output:
        Number1 equal Number2
*/



#include <stdio.h>

int main() {

    int num1, num2 ;
    scanf( "%d", &num1 );
    scanf( "%d", &num2 );

    if(num1 > num2){
        printf("Number1 greater than Number2");
    }//end if
    else if(num2 > num1){
        printf("Number1 lower than Number2");
    }//end else if
    else{
        printf("Number1 equal Number2");
    }//end else


    return 0 ;
}//end function