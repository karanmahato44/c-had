#include <stdio.h>
struct student {
    int rollno;
    char name[20];
    float marks;
};
struct student s = {44, "kappa", 90}; // global object

int main() {
    struct student *ptr;
    ptr = &s;
    printf("Name is: %s\n",ptr->name); // -> arrow operator, member access using pointer
    printf("Rollno is: %d\n",ptr->rollno);
    printf("Marks is: %f\n",ptr->marks);
    printf("Marks is(using *): %f\n",(*ptr).marks); // same as ->

    printf("Enter obejct s details: ");
    scanf("%d %s %f",&ptr->rollno,ptr->name,&ptr->marks); // i have no idea on the string part for white space inclusion, strcpy maybe?
    
    printf("Updated name is: %s\n",ptr->name);
    
    return 0;


}