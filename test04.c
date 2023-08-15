#include <stdio.h>
#include <string.h>


int main(){
    static char str1[30] = "My name is ";
    char str2[10];
    printf("please input your name:");
    gets(str2);
    strcat(str1,str2);
    puts(str1);

    return 0;
}