//结构体的赋值，输入和输出
#include <stdio.h>


int main(void){
    struct stu{
       int num;
       char *name;
       char sex;
       float score;
    }boy1,boy2; 

    boy1.num = 1;
    boy1.name = "xiaoming";
    printf("please input boy1's sex and score:");
    scanf("%c %f",&boy1.sex,&boy1.score);
    boy2 = boy1;
    printf("num = %d,name = %s,sex = %c,score = %f\n",boy2.num,boy2.name,boy2.sex,boy2.score);
}