#include <stdio.h>
#include <string.h>

struct Employee {
    char  Name[ 30 ] ;
    float  salary ;
    char   workDuration ;
    float yearExp ;
} ;

void formatNumber( char *salary ) ; //add comma

int main() {    
    struct Employee employees[ 10 ] ;
    char choice ;
    int index = 0 ;
    float everyPersonSalary ;
    float avgSalary ;

    int topDurationinCompany = 0 ;
    char  topNameDuration[ 20 ] ;
    float topSalaryDuration ;

    //format val
    char  topSalaryDurationtoFormat[ 30 ] ;
    char avgSalaryFormat[ 30 ] ;
    char everySalaryFormat[ 30 ] ;
    
   do {
        printf( "Do you want to Enter Employee Information? (y/n) :\n" ) ;
        scanf(" %c", &choice ) ; 

        if( choice == 'y' ) {
            printf( "\n----\n" ) ;
            printf( "Employee Name: " ) ;
            scanf( "%s", employees[ index ].Name ) ;
            printf( "Salary (Bath/Month): " ) ;
            scanf( "%f", &employees[ index ].salary ) ;
            printf( "Duration (Year): " ) ;
            scanf("%d", &employees[ index ].workDuration ) ;
            everyPersonSalary += employees[ index ].salary ;

        // Most duration....
        if (employees[ index ].workDuration > topDurationinCompany ) {
            topDurationinCompany = employees[ index ].workDuration ;
            strcpy( topNameDuration,employees[ index ].Name ) ;
            topSalaryDuration = employees[ index ].salary ;
    
        }//end if
        
        index += 1 ; 
        
        }//end if
        else if( choice != 'n' ) {
            printf("Error Please enter y or n.\n" ) ;

        }//end else if

} while ( choice == 'y' ) ;
    if ( index >  0 ) {

        
        avgSalary = everyPersonSalary / ( float )index ;


        // format
        sprintf( topSalaryDurationtoFormat, "%.2f", topSalaryDuration ) ; // turn to char before add comma
        sprintf( avgSalaryFormat, "%.2f", avgSalary );
        sprintf( everySalaryFormat, "%.2f", everyPersonSalary ) ;
        formatNumber( topSalaryDurationtoFormat ) ;
        formatNumber( avgSalaryFormat ) ;
        formatNumber( everySalaryFormat ) ;
        




        printf( "\nAverage of Salary : %s Bath", avgSalaryFormat ) ;
        printf( "\nPayment of every month : %s Bath", everySalaryFormat ) ;

        printf( "\n----------------------------------------\n" ) ;

        printf( "\n** Most duration in this business **\n" ) ;
        printf( "Name : %s (%d Years)\n", topNameDuration, topDurationinCompany ) ; 
        printf( "Salary : %s Bath",topSalaryDurationtoFormat ) ;

    }//end if

    return 0 ;
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