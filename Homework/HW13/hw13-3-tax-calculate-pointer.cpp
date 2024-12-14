#include <stdio.h>
#include <string.h>
struct Employee {
    char name[ 50 ] ;
    float salary ;
} ;

void maxTaxFunction( struct Employee employees[], char *maxName,float *maxTax, int size ) ;
void formatNumber( char *number );

int main() {
    int n = 50;
    struct Employee employees[ n ] ;
    int indexEmployee = 0 ;
    
    float totalSalaryPerMonth = 0 ;
    float totalSalaryPerYear = 0 ; 
    float tax = 0.07 ;
    float totalTax ;
    float mostTaxEmployee ;

    
    char maxTaxNameEmployee[ 30 ] ;
    float maxTaxEmployee ;

    

    while( true ) {
        printf( "\nEmployee %d's Name : ", indexEmployee + 1 ) ; //for count of employee
        scanf( "%s", employees[ indexEmployee ].name ) ;

        if (strcmp(employees[indexEmployee].name, "-1") == 0) {   //if -1 assgin to 0 then break
            break ;
        }
        printf( "Salary (Bath/Month) : " ) ;
        scanf( "%f",&employees[ indexEmployee ].salary ) ;


        totalSalaryPerMonth += employees[indexEmployee].salary ; 

        indexEmployee++ ;
    }//end while

    totalSalaryPerYear = totalSalaryPerMonth * 12;
    totalTax = totalSalaryPerYear * tax ;

    maxTaxFunction(employees, maxTaxNameEmployee, &maxTaxEmployee, indexEmployee ) ;

    //*********** format  ********
    char totalSalaryPerMonthFormat[ 30 ] ;
    char totalSalaryPerYearFormat[ 30 ] ;
    char totalTaxFormat[ 30 ] ;
    char maxTaxNameEmployeeFormat[ 30 ] ;
    char maxTaxEmployeeFormat[ 30 ];

    sprintf(totalSalaryPerMonthFormat, "%.2f", totalSalaryPerMonth ) ;
    sprintf(totalSalaryPerYearFormat, "%.2f", totalSalaryPerYear ) ;
    sprintf(totalTaxFormat, "%.2f", totalTax ) ;
    sprintf(maxTaxNameEmployeeFormat, "%.2f", maxTaxNameEmployeeFormat ) ;
    sprintf(maxTaxEmployeeFormat,"%.2f", maxTaxEmployee ) ;

    formatNumber( totalSalaryPerMonthFormat ) ;
    formatNumber( totalSalaryPerYearFormat ) ;
    formatNumber( totalTaxFormat ) ;
    formatNumber( maxTaxNameEmployeeFormat ) ;
    formatNumber( maxTaxEmployeeFormat ) ;
    //*********** format ********
    



    printf("\nAll salary per month: %s Bath",totalSalaryPerMonthFormat) ;
    printf("\nAll salary per year: %s Bath",totalSalaryPerYearFormat) ;
    printf("\nTax (7%% per year): %s Bath", totalTaxFormat) ;
    printf("\nMost tax in company : %s (%s Bath per year)", maxTaxNameEmployeeFormat, maxTaxEmployeeFormat ) ;

    
   

    return 0 ;


}//end function




void maxTaxFunction( struct Employee employees[], char *maxName,float *maxTax, int size ) {
    *maxTax = 0 ;
    for ( int i = 0; i < size; i++ )
    {
        for ( int i = 0; i < size; i++ ) {
            float tax = employees[ i ].salary * 12 * 0.07 ; 
            if (tax > *maxTax) {
                strcpy( maxName, employees[ i ].name ) ; 
                *maxTax = tax ;

            }//end if

        }//end for
        
    }//end for
    

}



// ************* format number ***************

void formatNumber( char *number ) {
    int len = strlen( number ) ; 
    int startPos = -1 ;              
    int commaPosAdd ;             
    int i,j ;   
    for( i = 0;i < len;i++ ) {         
        if( number[i] == '.' ) {
            startPos = i ;               //set start pos from "."
            break ;
        }
    }

    if ( startPos != -1 ) {                           
        for ( i = startPos - 3; i > 0; i -= 3 ) {     // -3 that is pos for add comma
            for ( j = len; j >= i; j-- ) {            //loop for shift char
                number[ j + 1 ] = number[ j ] ;                
            }//end for  
            number[ i]  = ',' ;                           //add comma
            len++ ;                                  //add more len after shift char
        }//end for
    }//end if
}//end function