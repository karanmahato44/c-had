#include <stdio.h>
// #define MUL(a,b) a*b
#define MAX(a,b) if(a>b) \
                    printf("%d is max\n",a); \
                    else \
                    printf("%d is max\n",b);

void main() {
    // printf("mul: %d\n",MUL(4,4));
    MAX(4,3);
    // #undef MAX // for previously defined macro
    MAX(4,3);

    // pre def macros
    printf("date:%s\n",__DATE__);
    printf("time:%s\n",__TIME__);
    printf("filename:%s\n",__FILE__);
    printf("line:%d\n",__LINE__);
    printf("ansi:%d\n",__STDC__);
}