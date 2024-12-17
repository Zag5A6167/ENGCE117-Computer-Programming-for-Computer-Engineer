#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int age;
};

void GetStudent(struct student child[][10], int *numA, int *numB) {
    int roomA = 0, roomB = 1;
    int indexRoomA = 0, indexRoomB = 0;
    numA = &indexRoomA;
    numB = &indexRoomB;
    while (1) {
        printf("Name for Room A %d: ", indexRoomA + 1);
        scanf("%s", child[roomA][indexRoomA].name);

        if (strcmp(child[roomA][indexRoomA].name, "-1") == 0) {
            break;
        }

        printf("Age for Room A %d: ", indexRoomA + 1);
        scanf("%d", &child[roomA][indexRoomA].age);

       

        indexRoomA++;
    }

    
}

int main() {
    struct student children[2][10];

    int numMemberA;
    int numMemberB;

    GetStudent(children,&numMemberA,&numMemberB);
    

    printf("\nRoom A Students:\n");
    for (int i = 0; i < numMemberA; i++) {
        printf("Name: %s, Age: %d\n", children[0][i].name, children[0][i].age);
    }

   

    return 0;
}

 
