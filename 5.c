#include <stdio.h>
int main() {
    int a[5] = {0,1,2,3,4};
    for(int i=0;i<5;i++) printf("%x,",&a[i]);
    printf("\n");
    int *p = &a[0];
    for(;p<=&a[4];p++) printf("%d,",*p);
    return 0;
}