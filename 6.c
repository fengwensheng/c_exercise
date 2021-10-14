#include <stdio.h>
int main() {
    struct A  {
        char a;
        int b;
        short c;
    };
    struct A testStruct = {0};
    int size = sizeof(struct A);
    printf("%d\n",size);
    return 0;
}