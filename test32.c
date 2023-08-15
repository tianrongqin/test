#include <stdio.h>
#include <string.h>

//需要在运行exe，然后在命令行中输入字符，就可以输出
void main(int argc,char *argv){
    while(argc --> 1){
        printf("%s",*++argv);
    }

}