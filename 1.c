#include <stdio.h>
int main(void) {
    printf("*****[1]variable 变量*****\n");
    char a = 'a';
    printf("请输入一个字符：");
    scanf("%c",&a);
    printf("该字符变量的字符表示是：%c\n",a);
    printf("该字符变量的整数表示是：%d\n",a);
    return 0;
}