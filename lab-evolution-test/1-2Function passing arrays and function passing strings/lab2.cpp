#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] ;
    char *output ;
    output = reverse( text ) ;
    printf( "MAIN : %s\n", output ) ;
}//end function







char* reverse(char str1[]){
    static char temp[50];
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp, "\n")] = 0;
    strcpy(str1,temp);
    int len = strlen(str1);

    char *rev_str = (char*)malloc(sizeof(char) * (len + 1));

    
    for(int i = 0 ; i < len;i++){
        rev_str[i] = str1[len - 1 - i];
    }
    rev_str[len] = '\0';

    printf("FUNC : %s\n", rev_str);
    return rev_str;
}




