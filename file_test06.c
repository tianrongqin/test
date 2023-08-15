#include <stdio.h>

//顺序读取每一个字符
int main(void){
    FILE *fp;
    fp = fopen("E:\\project\\test\\test1.txt","r");

    //必须注意的是在打开文件之后，我们要判断文件是否打开成功！这个是一定要的
    if( fp == NULL){
        perror("open error");
    }

    char c;
    while((c = fgetc(fp)) != EOF){
        putchar(c);
    }

    fclose(fp);
    return 0;
}