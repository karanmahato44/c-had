#include <stdio.h>
struct student {
    char name[20];
    int rollno;
    float marks;
};

int main() {
    struct student obj1[3];
    // obj1[0].rollno = 44;
    
    // printf("%d",obj1[0].rollno);
    int i;
    for(i=0; i<3; ++i) {
        printf("Enter index[%d] object details: ",i);
        scanf("%s%d%f",obj1[i].name,&obj1[i].rollno,&obj1[i].marks);
    }

    for(i=0; i<3; ++i) {
        printf("\n");
        printf("%s\n%d\n%f",obj1[i].name,obj1[i].rollno,obj1[i].marks);
        printf("\n");
    }
    return 0;
}