#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//从键盘读入若干个字符串，对它们按字符大小的顺序排序，然后将排序好的字符串送到磁盘文件中保存
int main(void){
    FILE *fp;
    char temp[10];
    fp = fopen("E:\\project\\test\\test3.txt","w");
    if( fp == NULL ){
        perror("open error");
    }
    //先获取输入的字符串存放在数组中，进行保存后再进行位置交换
    char ch[3][10];
    printf("please input character:");
    for(int i = 0;i < 3;i++){
        scanf("%s",ch[i]);
    }

    for(int i = 0;i < 3;i++){
        for(int j = i + 1;j < 3;j++){
            if(strcmp(ch[i],ch[j]) > 0){
                strcpy(temp,ch[i]);
                strcpy(ch[i],ch[j]);
                strcpy(ch[j],temp);
            }
        }
    }

    //上面已经交换成功了，就开始将数组里面的内容直接存放在文件中
    for(int i = 0;i < 3;i++){
        fputs(ch[i],fp);
        fputs("\n",fp);
        printf("%s\n",ch[i]);
    }

    fclose(fp);
    return 0;


}