#include <stdio.h>
#include <unistd.h>



int main() {

    bool hasinstantNoodle = false ;
    bool bowl = false ;
    bool boiled = false ;
    bool seasoning = false ;
    int money = 0 ;
    int timeForEat ;

    printf( "I dont'have any instant noodle.\n" ) ;

    for ( int i = 0; i < 2; i++ ) {
        
        money += 1 ;
        if( hasinstantNoodle == false ) {

            printf( "I am going to market for buying a instant noodles Oh instant noodle cost is 2 $, i have just %d money\n", money ) ;
            
            if (money == 2) {

                printf( "I take 2 $ and buy a instant noodle.\n" ) ;
                hasinstantNoodle = true ; 
                
            }
            else { 

                printf( "on my way to home\n" ) ;

            }//end if
            
        }// end if
    }//end for

    printf( "Boil kettle not boil.\n" ) ;

    if( boiled == false) {

        boiled = true ;
        printf( "Boil kettle is ready!\n" ) ;

    }//end if

    if( bowl == false ) {

        bowl = true ; 
        printf( "take a bowl in kitchen.\n" ) ;

    }//end if

    printf( "Tear a package instant noodle then put it in a bowl.\n" ) ;

      
    if( seasoning == false) {

        seasoning = true ;
        printf( "Got  seasoning in kitchen.\n" ) ;

    }//end if

    printf( "Put seasoning on top of instant noodle.\n" ) ;
    printf( "put hot boiled water into bowl.\n" ) ;

    while (true) {
        sleep(1) ;

        if ( timeForEat >= 30 ) {
            
            printf( "Ready to serve" ) ;    
            break;

        }
        else {
            timeForEat += 1;
        }
        
    }//end while
        
        
    

        
        
    

    
    










    return 0;

}//end function