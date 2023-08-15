#include <stdio.h>
#include <string.h>

int main(){
    //比较函数
    char str1[11],str2[]="good morning";
    int k;

    printf("please input str:");
    gets(str1);
    k = strcmp(str1,str2);

    if(k == 0) printf("str1 = str2");
    else if(k > 0) printf("str1 > str2");
    else printf("str1 < str2");

    return 0;
}