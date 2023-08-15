#include <stdio.h>

//顺序写入每一个字符
int main(void){
    FILE *fp = fopen("E:\\project\\test\\test1.txt","w");

    //要先判断打开的文件是否成功
    if( fp == NULL ){
        perror("open error");
    }
    char c[5] = {'h','e','l','l','o'} ;
    for(int i = 0;i < 5;i++){
        fputc(c[i],fp);
        fputs("\n",fp);
        putchar(c[i]);
    }
    fclose(fp);
    return 0;

}