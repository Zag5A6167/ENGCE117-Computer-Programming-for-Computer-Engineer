#include <stdio.h>
#include <string.h>

void explode(char str1[], char splitter[], char str2[][10], int *count) {
    int lenOfStr1 = strlen(str1);
    if (lenOfStr1 == 1) {
        *count = 0;
        return;
    }
    int i, j, currPosDest = 0, start = 0;

    for (i = 0; i < lenOfStr1; i++) {
        int foundDelimiter = 0;
        for (j = 0; splitter[j] != '\0'; j++) {
            if (str1[i] == splitter[j]) {           // if splitter is found in str1
                foundDelimiter = 1;
                if (i - start > 0) {                
                    strncpy(str2[currPosDest], &str1[start], i - start);        // copy str1 to desc this is str2
                    str2[currPosDest][i - start] = '\0';                        // copy str1 to desc this is str2
                    str2[currPosDest][strcspn(str2[currPosDest], "\n")] = '\0'; //ensure next index after charactor  
                    currPosDest++;                                              //add pos for keep next text
                }
                start = i + 1;
                break;
            }
        }

        // If two consecutive delimiters are found, skip the second one
        if (foundDelimiter && i + 1 < lenOfStr1 && strchr(splitter, str1[i + 1])) {
            start = i + 2;
        }
    }

    
    if (lenOfStr1 - start > 1) {
        strncpy(str2[currPosDest], &str1[start], lenOfStr1 - start);
        str2[currPosDest][lenOfStr1 - start] = '\0';
        str2[currPosDest][strcspn(str2[currPosDest], "\n")] = '\0';
        currPosDest++;
    }
    *count = currPosDest;
}

int main() {
    char out[20][10];
    int num;
    char splitter[] = "/-:, ";

    char s1[50];
    fgets(s1, sizeof(s1), stdin);

    explode(s1, splitter, out, &num);

    if (num == 0) {
        printf("count = %d\n", num);
    } else {
        printf("Output:\n");
        for (int i = 0; i < num; i++) {
            printf("str2[%d] = \"%s\"\n", i, out[i]);
        }
        printf("count = %d\n", num);
    }

    return 0;
}