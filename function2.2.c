#include <stdio.h>
int a,b,x;
void sum(int a, int b); // fn declaratin, but variable names are optional only data type is compulsory IMP

void sum(int a, int b) { // fn defn, her data type and var name are both compulsory IMP
    int x=0;
    x=a+b;
    printf("sum is %d",x);
} // in case of no returns it ie }  acts as void return

int main() { // main fn
    sum(11,11);
    return 0;
}