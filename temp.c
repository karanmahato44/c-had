#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("filehandling2.txt","w");
    fprintf(ptr,"kek");
    fclose(ptr);
    return 0;
}