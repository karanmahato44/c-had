#include <stdio.h>
int main() {
    int n, divcount=0;
    printf("enter a num: "); scanf("%d",&n);
    for(int i=1; i<=n; ++i) {
        if(n%i==0)
            ++divcount;
    }
    printf("divcount=%d\n",divcount);
    if(divcount==2)
        printf("prime");
    else
        printf("not prime");
    return 0;
}
