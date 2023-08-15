#include <stdio.h>

//进行文件错误检测
int main(void){
    FILE *fp;
    fp = fopen("E:\\project\\test\\test1.txt","r");
    if( ferror(fp) != 0){
        perror("file is error");
    }else{
        printf("file is ok!\n");
    }

    return 0;
}