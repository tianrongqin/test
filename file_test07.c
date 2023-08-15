#include <stdio.h>


//顺序写入一个字符串
int main(void){
    FILE *fp;
    fp = fopen("E:\\project\\test\\test1.txt","w");
    //判断打开是否成功
    if( fp == NULL){
        perror("open error");
    }
    //这里表示的是一个字符数组，一共有四个，每个字符最多只能输入10个字符
    char ch[4][10];
    for(int i = 0;i < 4;i++){
        gets(ch[i]);
    }

    for(int i = 0;i < 4;i++){
        fputs(ch[i],fp);
        fputs("\n",fp);
        printf("%s",ch[i]);
    }

    fclose(fp);
    return 0;
}