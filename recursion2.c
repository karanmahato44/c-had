#include <stdio.h>
int sum(int);
int sum(int x) {
    int s;
    if(x==1) {
        return x;
    }
    s = x + sum(x-1);
    return s;
}


int main() {
    int result;
    int num;
    printf("Sum up to what number(+ve int only)?: ");
    scanf("%d",&num);
    result = sum(num);
    printf("%d",result);
    return 0;
}