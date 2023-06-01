#include <stdio.h>
#pragma pack(1) // ppd for struct packing
struct abc {
    char a;
    int b;
    double c;

};
int main() {
    struct abc obj;
    printf("%d",sizeof(obj));
    return 0;
}