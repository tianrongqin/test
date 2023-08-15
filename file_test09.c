#include <stdio.h>


//顺序读写操作，将内容写入磁盘上
int main(void){
    FILE *fp;
    fp = fopen("E:\\project\\test\\test1.txt","w");
    if(fp == NULL){
        perror("open error");
    }
    char c;
    printf("please input the character:");
    scanf("%c",&c);
    c = getchar();
    while(c != '#'){
        fputc(c,fp);
        putchar(c);
        //再接收下一个字符
        c = getchar();
    }
    fclose(fp);
    putchar(10);
    return 0;

}