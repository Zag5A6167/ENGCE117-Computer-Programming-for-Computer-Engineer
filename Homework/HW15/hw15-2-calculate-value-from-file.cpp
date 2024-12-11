#include <stdio.h>
int main() {

    FILE *file;
    char c ;
    int valueInFile;
    int userInput;
    int sum;
    file = fopen("a15-2.txt", "r" ) ;

    fscanf(file, "%d", &valueInFile);
    
    printf("Input vale from user to B: ");
    scanf("%d",&userInput);
    sum = valueInFile + userInput ;
    printf("\nRead File to A is %d\n",valueInFile);
    printf("Input value from user is %d\n",userInput);
    printf("Answer = %d",sum);

   
    fclose(file);
    return 0;
}//end function 