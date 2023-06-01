// same as struct only diff being how memory is allocated i.e in a single location or a single var
// not used nowadays, only advatage was single element/member processing, so less memory usage
// all same i.e including arrays, pointers, member access etc.
#include <stdio.h>

union sample {
    int a;
    float b;
    char c;
};

int main() {
    union sample obj;
    obj.a = 11;
    obj.b = 22.22;
    obj.c = 97; // ascii a // this will be final for all, since single mem allocatin(location is used)
    printf("a is: %d",obj.a);
    printf("\nb is: %f",obj.b);
    printf("\nc is: %c",obj.c);
    return 0;
}