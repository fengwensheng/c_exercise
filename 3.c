// Exercise 2-4. 
// Write an alternate version of squeeze(s1,s2) 
// that deletes each character in s1 that matches any character in the string s2.
//除去s1，s2中相同的字符

#include <stdio.h>
#include <stdbool.h>

int main() {
    char *s1 = "Vincent Feng";
    char *s2 = "wa sai";
    char result[100];
    int i = 0;
    int j = 0;
    int k = 0;
    while(s1[i++]!='\0') {
        j = 0;
        bool hasDup = false;
        while(s2[j++]!='\0') {
            if(s2[j]==s1[i]) {
                hasDup = true;
                break;
            }
        }
        if(!hasDup) result[k++] = s1[i];
    }
    result[k] = '\0';
    printf("%s\n",result);
}