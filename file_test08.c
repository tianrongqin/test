#include <stdio.h>



//顺序读取一个字符串
int main(void){
    FILE *fp;
    fp = fopen("E:\\project\\test\\test1.txt","r");
    if( fp == NULL){
        perror("open error");
    }

    char ch[4][10];
    for(int i = 0;i < 4;i++){
        fgets(ch[i],10,fp);
        printf("%s",ch[i]);
    }

    fclose(fp);
    return 0;

}