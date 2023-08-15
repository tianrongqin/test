#include <stdio.h>


//这里打开文件,读取数据,写入数据
int main(void){
    FILE *fp;
    char *filename = "E:\\project\\test\\test.txt";
    fp = fopen(filename,"r+");

    char c; 

    if(fp == NULL){
        printf("open the filename:%s is error!\n",filename);
        return 1;
    }

    while((c = fgetc(fp)) != EOF){
        printf("%c",c);
    }
    printf("\n");

    char buf[1024];
    int read = fread(buf,sizeof(char),sizeof(buf),fp);
    printf("read = %d!\n",read);
    

    char buffer[] = "Have a good time!";
    fwrite(buffer,sizeof(char),sizeof(buffer),fp);
    while((c = fgetc(fp)) != EOF) {
        putchar(c);
    }
    fclose(fp);
    return 0;

}