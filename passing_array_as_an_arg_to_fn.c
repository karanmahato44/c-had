#include <stdio.h>

int avg(int[], int); // fn declaration

int avg(int marks[], int size) { // fn defn
    /* int marks[] is acting as an pointer in her == int *marks */
    int i;
    int total=0;
    int average=0;
    
    for(i=0; i<size; ++i) {
        total += marks[i];
    }

    average=total/size;
    // printf("size of marks inside main is: %d\n",sizeof(marks));
    return average;
}

int main() {
    int average;
    int size;
    int marks[]={10,20,30,40,50};
    size=sizeof(marks)/sizeof(int);
    average=avg(marks, size); // fn call
    printf("average is: %d\n",average);

    // printf("size of marks inside main is: %d\n",sizeof(marks));
    return 0;
}