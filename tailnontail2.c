#include <stdio.h>
int fn(int);
int fn(int a) {
    if(a<1)
        return 0;
    else
        return 1 + fn(a/2); // non tail cz we still have to do addition, so addtion is the last thing not the recursive call, hence non tail
}

int main() {
    int x;
    x = fn(10);
    printf("%d",x);
    return 0;
}

// here we are maintaing the stack and fully utilizing it so it's good 