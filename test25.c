#include <stdio.h>
#include <string.h>

//查找输入的字符中是否存在'k'
int main(void){
    char *a,st[10];
    a = st;
    printf("please input string:");
    scanf("%s",a);
    for(int i = 0;a[i] != '/0';i++){
        if(a[i] == 'k'){
            printf("this is a 'k'!\n");
        }
    }
    return 0;
}