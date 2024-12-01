/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด
    (ผลลัพธ์ของ Salary จะต้องอยู่ในรูปแบบ Decimal Number เท่านั้น เช่น 374,000)

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120,000.00
y8uin 
    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374,000.00
*/


#include <stdio.h>
#include <string.h>


void formatNumber(char *salary);

int main(){
    char employeeId[10];
    float workingTime;
    float salaryPerHour;
    float salary = 0;
    char formatSalary[30];
    
    printf("Input the Employees ID(Max. 10 chars):");
    scanf("%s",employeeId);
    
    printf("Input the working hrs: ");
    scanf("%f",&workingTime);

    printf("Salary amount/hr: ");
    scanf("%f",&salaryPerHour);

    printf("Employees ID = %s\n",employeeId);

    salary = workingTime * salaryPerHour ;

    sprintf(formatSalary,"%.2f",salary);
    formatNumber(formatSalary);
    printf("Salary = U$ %s\n", formatSalary);




    return 0;    
}


/** 
  Function Name : formatNumber     comma  format number
  @Param Input *salary char        text input for format process
  example:
    Input:  1000.00
    Output: 1,000.00
**/

void formatNumber( char *salary ) {
    int len = strlen( salary ) ; 
    int startPos = -1 ;              
    int commaPosAdd ;             
    int i,j ;   
    for( i = 0;i < len;i++ ) {         
        if( salary[i] == '.' ) {
            startPos = i ;               //set start pos from "."
            break ;
        }
    }

    if ( startPos != -1 ) {                           
        for ( i = startPos - 3; i > 0; i -= 3 ) {     // -3 that is pos for add comma
            for ( j = len; j >= i; j-- ) {            //loop for shift char
                salary[ j + 1 ] = salary[ j ] ;                
            }//end for  
            salary[ i]  = ',' ;                           //add comma
            len++ ;                                  //add more len after shift char
        }//end for
    }//end if
}//end function