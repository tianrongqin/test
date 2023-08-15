#include <stdio.h>

//随机读取文件,第一次显示在屏幕上，第二次复制到新的文件中
int main(void){
    FILE *fp1;
    FILE *fp2;
    fp1 = fopen("E:\\project\\test\\test.txt","r");
    fp2 = fopen("E:\\project\\test\\test8.txt","w");
    if(fp1 == NULL){
        perror("open fp1 error");
    }
    char ch;
    ch = getc(fp1);
    while( !feof(fp1) ){
        putchar(ch);
        ch = getc(fp1);
    }
    putchar(10);
    //将位置指向起始位置
    rewind(fp1);
    //将位置随机指定
    fseek(fp1,3,1);
    //进行复制操作
    char tch = getc(fp1);
    while( !feof(fp1) ){
        fputc(tch,fp2);
        putchar(tch);
        tch = fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;




}