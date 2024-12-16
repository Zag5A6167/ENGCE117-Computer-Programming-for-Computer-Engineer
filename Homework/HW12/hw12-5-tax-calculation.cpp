#include <stdio.h>
#include <string.h>  // For strcpy

  float tax = 0.07 ;


struct Employee {
  char name[ 20 ] ; 
  float salary ;

};





float calTax( float annual_salary ) ;

void formatNumber( char *salary ) ;


int main() {
  Employee employee ;
  float totalSalary = 0.0f, total_tax = 0.0f ;
  char highest_tax_payer[ 50 ] ;
  float highest_tax = 0.0f ;


  float monthPerSalary ;
  float yearPerSalary ;
  float taxPerYear ;
  float highTaxEmployee ;

  char monthSalaryFormat[ 30 ] ;
  char yearSalaryFormat[ 30 ] ;
  char taxPerYearFormat[ 30 ] ;
  char highTaxEmployeeFormat[ 30 ] ;

  int countStudent = 1 ;
  while ( 1 ) {
    printf( "Employee %d's Name: ",countStudent ) ;
    scanf("%s", employee.name ) ;

    if( strcmp( employee.name, "-1" ) == 0 ) {
      break ;
      
    }//end if

    printf( "Salary (Bath/Month): ") ; 
    scanf("%f", &employee.salary ) ;

    float annual_salary = employee.salary * 12 ;
    float tax = calTax( annual_salary ) ;

    totalSalary += annual_salary ;
    total_tax += tax ;

    if ( tax > highest_tax ) {
      highest_tax = tax ;
      strcpy(highest_tax_payer, employee.name ) ;
    }//end if

    countStudent++ ;
  }//end while

 
  // float monthPerSalary;
  // float yearPerSalary;
  // float taxPerYear;
  // float highTaxEmployee;
  // char monthSalaryFormat[ 30 ] ;
  // char yearSalaryFormat[ 30 ] ;
  // char taxPerYearFormat[ 30 ];
  // char highTaxEmployeeFormat[ 30 ];

  monthPerSalary = totalSalary / 12 ;
  yearPerSalary = totalSalary ;
  taxPerYear = total_tax ;
  highTaxEmployee = highest_tax ;

  sprintf(monthSalaryFormat,"%.2f",monthPerSalary);
  sprintf(yearSalaryFormat,"%.2f",yearPerSalary);
  sprintf(taxPerYearFormat,"%.2f",taxPerYear);
  sprintf(highTaxEmployeeFormat,"%.2f",highTaxEmployee);
  formatNumber( monthSalaryFormat ) ;
  formatNumber( yearSalaryFormat ) ;
  formatNumber( taxPerYearFormat ) ;
  formatNumber( highTaxEmployeeFormat ) ;


  printf("\nAll salary per month: %s Bath\n", monthSalaryFormat ) ;
  printf("All salary per year: %s Bath\n", yearSalaryFormat ) ;
  printf("Tax (7%% per year): %s Bath\n", taxPerYearFormat ) ;
  printf("Most tax in company: %s (%s Bath per year)\n", highest_tax_payer, highTaxEmployeeFormat);
 
 
 
 
  return 0;
}




float calTax(float annual_salary) {
  return annual_salary * tax;
}//end function


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