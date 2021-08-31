///删除一个字符串内所有指定字符
///eg. "hello,world",'l' -> "heo,word"
#include <stdio.h>
int main(void) {
    char testString[100];
    char testChar;
    printf("请输入一个字符串:");
    scanf("%s",testString);
    printf("请输入一个字符:");
    scanf(" %c",&testChar);
    int i=0;
    int j=0;
    for(;testString[i]!='\0';i++) {
        if(testString[i]!=testChar) testString[j++] = testString[i];  
    }
    testString[j] = '\0';
    printf("[%s]去掉所有字符[%c]后的结果是:",testString,testChar);
    for(int i=0;testString[i]!='\0';i++) {
        printf("%c",testString[i]);
    }
    printf("\n");
    return 0;
}