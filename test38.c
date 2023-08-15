#include <stdio.h>

//先分配空间，再释放空间

int main(void){
    struct stu{
    int num;
    char *name;
    char sex;
    float score;
   }*ps;
    ps = (struct stu*)malloc(sizeof(struct stu));
    ps->num = 102;
    ps->name = "xiaoming";
    ps->sex = 'M';
    ps->score = 70.0;
    printf("num = %d,name = %s,sex = %c,score = %f\n",ps->num,ps->name,ps->sex,ps->score);
    free(ps);

    return 0;

}