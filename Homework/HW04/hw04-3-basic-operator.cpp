
/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
    
    Test case:
        2 3 1
    Output:
        Answer = 6

    Test case:
        4 -1 3
    Output:
        Answer = 6
*/
#include <stdio.h>

int val1,val2,val3;
int sum = 0;


int main() {

    scanf("%d %d %d", &val1,&val2,&val3);
    sum = val1+val2+val3;
    printf("%d", sum);


    return 0;
}

// Test case OK