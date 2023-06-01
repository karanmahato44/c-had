// https://stackoverflow.com/questions/37225244/error-assignment-to-expression-with-array-type-error-when-i-assign-a-struct-f

// tl;dr - use strcpy
// strcpy(obj.name,"string");  strcpy(destination, source) VIMP

#include <stdio.h>

struct student {
    char name[20];
    int rollno;
    float marks;
};  // watch out for this semi colon VIMP
// objects can be declared here as well, globally
int main() {
    struct student obj1 = {"patrick bateman", 1, 100.00}; // obj1 is variable of type 'struct student' or also called an object
    
    printf("%s\n",obj1.name); // dot operator also called member(access) operator

    struct student object2;
    // object2.name = "kek"; // doesn't work ???? see first comment
    // soln is to use strcpy

    object2.rollno = 666;
    object2.marks = 99;


    struct student obj3;
    printf("enter student details - name: ");
    fgets(obj3.name, 20, stdin);
    printf("\n%s",obj3.name);
    printf("enter student details - roll no: ");
    scanf("%d",&obj3.rollno);
    printf("\n%d",obj3.rollno);



    struct student obj4 = {"kappa"}; // by default int, float with 0 and string/char with \0 null
    struct student obj5 = {"kyto", 44, 90};
    if(obj4.rollno < obj5.rollno)
        printf("\nnice");

    struct student obj69;
    obj69 = obj1; // assignment works cz same struct
    printf("\n%s %d %f",obj69.name, obj69.rollno, obj69.marks);

    return 0;
}