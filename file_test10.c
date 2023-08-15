#include <stdio.h>

//将一个文件的内容复制到另外一个文件中
int main(void){
    FILE *fp_from,*fp_to;
    fp_from = fopen("E:\\project\\test\\test1.txt","r");
    fp_to = fopen("E:\\project\\test\\test2.txt","w");
    if(fp_from == NULL){
        perror("open from file error");
    }
    if(fp_to == NULL){
        perror("error to file error");
    }
    char ch;
    ch = fgetc(fp_from);
    while( !feof(fp_from) ){
        fputc(ch,fp_to);
        putchar(ch);
        ch = fgetc(fp_from);
    }

    putchar(10);
    fclose(fp_from);
    fclose(fp_to);
    return 0;
}