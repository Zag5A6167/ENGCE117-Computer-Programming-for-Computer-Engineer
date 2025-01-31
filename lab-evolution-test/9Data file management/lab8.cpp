#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Customer {
    public :
        char Name[20] ;
        int Age ;
        char Category[20] ;
        char Product[20] ;
        float Price ;
    public : 
        void GetCustomerInfo( char StrMode[ 50 ] ) ;
} ;

class FileHandler {
    public :
        FILE *fp ;
        char FilePath[ 100 ] ;
        Customer C[ 500 ] ;
        int MaxCustomer ;
    public :
        FileHandler( char FilePath[ 100 ] ) ;
        void GetFilePath() ;
        void ReadFile() ;
        void SelectMode() ;
} ;

int main() {
    FileHandler *F = new FileHandler( "output/customer.csv" ) ;
    while( 1 ) F->SelectMode() ;
    return 0;
}

void FileHandler :: SelectMode() {
    int Mode = 0 ;
    printf( "Select Mode : " ) ;
    scanf( "%d", &Mode ) ;

    if( Mode == 0 ) { //Exit
        printf("Thank you!.");
        exit(0);
    } else if( Mode == 1 ) { //Who bought higest price
        float maxprice = 0;
        int index = -1;
        for(int i = 0 ; i < this->MaxCustomer;i++){
            if (this->C[i].Price > maxprice){
                maxprice= this->C[i].Price;
                index = i;
            }

            }
            if(index != -1){
                this->C[index].GetCustomerInfo("Who bought highest price.");
        }


    } else if( Mode == 2 ) { //Lines of file
        printf( "File data = %d records.\n", this->MaxCustomer ) ;
    } else if( Mode == 3 ) { //Average Price
        float sum= 0;
        for(int i= 0;i<this->MaxCustomer;i++){
            sum+= this->C[i].Price;
        }
        printf("Average price = %.2f\n",sum / this->MaxCustomer);




    } else if( Mode == 4 ) { //Count People who age above average.
        int totalage = 0;
        for(int i = 0; i <  this->MaxCustomer;i++){
            totalage += this->C[i].Age;
        }
        float averageAge = (float)totalage/this->MaxCustomer;
        int count = 0;
        for(int i = 0;i < this->MaxCustomer;i++){
            if(this->C[i].Age > averageAge){
                count++;
            }
        }


        printf("Average age = %.2f.\n", averageAge);
        printf("People who aged above average = %d.\n", count);


    } else if( Mode == 5 ) { //Most Popular Product
        int maxCnt = 0;
        char theMostproduct[30];
        for(int i = 0; i < this->MaxCustomer;i++){
            int count = 0;
            for(int j = 0; j < this->MaxCustomer;j++){
                 if (strcmp(this->C[i].Product, this->C[j].Product) == 0) {
                    count++;
                }
            }
            if (count > maxCnt) {
                maxCnt = count;
                strcpy(theMostproduct, this->C[i].Product);
            }
        }


        printf("Most popular product = %s (sold %d times).\n", theMostproduct, maxCnt);



    } else if( Mode == 6 ) { //Least Popular Product
        int minCnt = this->MaxCustomer;
        char leastproduct[30];

        for(int i = 0; i < this->MaxCustomer;i++){
            int count = 0;
            for(int j = 0; j < this->MaxCustomer;j++){
                if(strcmp(this->C[i].Category,this->C[j].Category) == 0){
                    count++;
                }
            }

            if(count < minCnt){
                minCnt = count;
                strcpy(leastproduct,this->C[i].Category);
            }
        }

        printf("Least popular category = %s (sold %d times).\n", leastproduct, minCnt);





    } else {
        printf("Thank you!.");
        exit(0);




    }
}

FileHandler :: FileHandler( char FilePath[ 100 ] ) {
    strcpy( this->FilePath, FilePath ) ;
    this->ReadFile() ;
}

void FileHandler :: ReadFile() {
    this->fp = fopen(this->FilePath,"r");
    this->MaxCustomer=0;

    while(fscanf(this->fp, "%[^,],%d,%[^,],%[^,],%f\n",
        this->C[ this->MaxCustomer ].Name,&this->C[this->MaxCustomer].Age, 
        this->C[ this->MaxCustomer].Category,this->C[ this->MaxCustomer].Product, 
        &this->C[this->MaxCustomer ].Price) != EOF ) {
                  this->MaxCustomer++ ;

    }

}

void Customer :: GetCustomerInfo( char StrMode[ 50 ] ) {
    printf( "--------| %-8s\n", StrMode ) ;
    printf("%-8s : %-10s\n", "Name", this->Name ) ; 
    printf("%-8s : %-4d\n", "Age", this->Age ) ;
    printf("%-8s : %-10s\n", "Category", this->Category ) ; 
    printf("%-8s : %-10s\n", "Product", this->Product ) ; 
    printf("%-8s : %-5.2f\n", "Price", this->Price ) ; 
}

void FileHandler :: GetFilePath() {
    //YOUR CODE HERE
}
