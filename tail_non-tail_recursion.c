// space complexity O(n) - bad compared to loop O(1) but time complexity is same
// stack is maintained for nothing to do when returning so that's why bad, wastage of space

// they are bad in general
#include <stdio.h>
void print(int);
void print(int a) {
    if(a<1) 
        return;
    else {
        printf("%d ",a);
        print(a/2);
        // printf("%d ",a);   // this will make it non tail recursion
    }
}


int main() {
    print(10);
    return 0;
}