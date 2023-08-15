#include <stdio.h>


//文件顺序读
int main(void){
    FILE *fp = fopen("E:\\project\\test\\test.txt","r");
    if(fp == NULL){
        perror("fwrite error");
        return 1;
    }

    char ch;
    while((ch = fgetc(fp)) != EOF){
        printf("%c",ch);
    }

    fclose(fp);

    return 0;

}