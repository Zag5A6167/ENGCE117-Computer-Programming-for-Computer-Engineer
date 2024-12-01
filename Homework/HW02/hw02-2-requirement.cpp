#include <stdio.h>




int main() {

    bool skill = 1 ; // is no skill
    bool foundWebsite = 1 ;  // website found
    bool login = 1 ;        //login already?
    bool portfolio = 0 ;    // is there port?
    bool foundJob = 1 ;     // found your job?
    bool customerAgree = 0 ;    // customer ok about project?
    bool finishedProject = 1 ;  // finished your project?
    bool feedback = 1 ;         // feedback from customer?

    printf( "Do you have any experience with creating website?\n" ) ;

   
    if(skill == 1) {
        printf( "Output Find freelance website\n" ) ;
        while( !foundWebsite ) {
            printf("Output Find freelance website\n") ;

        }
        printf( "display login user account\n" ) ;

        if( login == 1 ) {
            portfolio = 1 ; //create portfloio

            do
            {
                printf( "Search for job postings or self postings\n" ) ;

            while( foundJob != 1 ) {
                printf( "Search for job postings or self postings\n" ) ;    

            }//end while
            printf( "Talking about requirement and make relationship then request a quote\n" ) ;
            if( customerAgree == 0 ) {
                customerAgree = 1 ;
            }//end if
            } while ( customerAgree == 0 ) ; 
            
            do
            {
               while( finishedProject != 1 ) {
                printf( "Doing a project\n" ) ;
                if( feedback == 0 ) {
                    feedback = 1 ;
                }
            }
            printf( "Finished projected\n" ) ;
            printf( "Deliver project to customer\n" ) ;
            } while ( feedback == 0 ) ;
            
            printf( "Get money from customer\n" ) ;

            

            
        }//end if
    }//end if
   

    return 0;
}//end function