#include<stdio.h>


//文件顺序写
int main(void){
    FILE *fp = fopen("E:\\project\\test\\test.txt","r+");
    if(fp == NULL){
        perror("fwrite error");
        return 1;
    }
    char c;
    while((c = fgetc(fp)) != EOF){
        printf("%c",c);
    }
    char ch[] = "good morning!";
    fwrite(ch,sizeof(char),sizeof(ch),fp);
    while((c = fgetc(fp)) != EOF){
        printf("%c",c);
    }
    fclose(fp);
    return 0;
}