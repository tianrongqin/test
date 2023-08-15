// a、连续创建32个文件，每一个文件名字规则为1.txt，2.txt,3.txt......32.txt
// b、使用写的接口函数，每个文件写入256k的内容，写入的256k内容统一为字符串”aa”
// c、文件写完之后，将每个文件内容读出来对比，查看是否与写入的256k内容一致。如果一致，直接打印”pass”, 如果不一致打印“fail”

//考察文件的创建，文件的写入以及文件读取之后的比较
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *file[32];
    //连续创建32个文件
    int p = 0;
    char *prefix = "e:\\project\\test\\";
    printf("%s\n",prefix);
    for(int i = 1;i <= 32;i++)
    {
        char t[1];
        sprintf(t,"%d",i);
        char *temp = t;
        char *suffix = strcat(temp,".txt");
        printf("suffix = %s\n",suffix);
        int num = strlen(prefix) + strlen(suffix) + 1;
        char *filename = (char *)calloc(num,sizeof(char));
        strcat(filename,prefix);
        strcat(filename,suffix);
        printf("filename = %s\n",filename);
        file[p] = fopen(filename,"w+");
        if(file[p] == NULL){
            perror("open file error");
        }
        //每个文件都进行写操作
        for(int m = 0;m < 256;m++){
            for(int n = 0;n < 1024;n++){
                fputc('a',file[p]);
            }
        }
        //释放内存
        free(filename);
        //关闭文件
        fclose(file[p]);

        p++;
    }

    //打开文件并读取文件
    //判断取出来的内容和写进去的内容是否一致
    for(int j = 0;j < 32;j++)
    {
        printf("enter read data\n");
        char t[1];
        sprintf(t,"%d",j + 1);
        char *temp = t;
        char *suffix = strcat(temp,".txt");
        printf("prefix2 = %s\n",prefix);
        printf("suffix2 = %s\n",suffix);
        int num = strlen(prefix) + strlen(suffix) + 1;
        char *filename = (char *)calloc(num,sizeof(char));
        strcat(filename,prefix);
        strcat(filename,suffix);
        printf("filename2 = %s\n",filename);
        file[j] = fopen(filename,"r");
        if(file[j] == NULL){
            perror("open file error");
        }
        //把文件的位置移到文件尾
        fseek(file[j],0,SEEK_END);
        //读取文件的大小
        long int size = ftell(file[j]);
        printf("length2 = %ld\n",size);
        //读取结束后，需要将文件的位置移到文件头
        rewind(file[j]);
        //读取文件内容是否全部字节都是'a'
        char c;
        long int charNum = 0;
        for(int i = 0;i < size;i++){
            if((c = fgetc(file[j])) == 'a'){
                charNum++;
            }
        }
        if(charNum == size){
            printf("pass\n");
        }
        else{
            printf("fail\n");
        }

        //释放空间
        free(filename);

        //关闭文件
        fclose(file[j]);
        
    }

    return 0;

}