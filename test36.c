#include <stdio.h>


//指针变量指向一个结构变量时，就称为结构指针变量，不同的表现形式，输出的结果相同，如下可视
struct  stu
{
    int num;
    char *name;
    float score;
}boy={102,"zhang san",70.5},*p;

int main(void){
    p = &boy;
    printf("num = %d,name = %s,score = %f\n",boy.num,boy.name,boy.score);
    printf("num = %d,name = %s,score = %f\n",(*p).num,(*p).name,(*p).score);
    printf("num = %d,name = %s,score = %f\n",p -> num,p -> name,p -> score);

    return 0;

}
