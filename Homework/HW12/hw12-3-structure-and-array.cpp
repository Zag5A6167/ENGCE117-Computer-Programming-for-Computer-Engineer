#include <stdio.h>

struct Employee {
    char  Name[ 30 ] ;
    float   salary ;
    char   workDuration ;
    float yearExp ;
} ;

int main() {    
    struct Employee employees[ 10 ] ;
    char choice;
    int index = 0;
    float salary;
    float avgSalary;
   do {
    printf("Do you want to Enter Employee Information? (y/n) :\n");
    scanf(" %c",&choice ); 

    if(choice == 'y'){
        printf("Employee Name: ");
        scanf("%s", employees[index].Name);
        printf("Salary (Bath/Month): ");
        scanf("%f", &employees[index].salary);
        printf("Duration (Year): ");
        scanf("%d", &employees[index].workDuration);
    }
    salary += employees[index].salary;

    index += 1; 

} while (choice == 'y');
    if (index >  0) {
    }
        avgSalary = salary / (float)index;
        printf("\nAverage of Salary : %.2f",avgSalary);
        printf("\nPayment of every month : %.2f",salary);
        printf("\n----------------------------------------\n" ) ;
        printf("\n** Most duration in this business **\n");


    return 0 ;
}//end function