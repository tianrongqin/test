#include <stdio.h>

//采用结构指针数组来计算所有分数的平均值和不及格人数
struct stu{
        int num;
        char *name;
        char sex;
        float score;
    }student[5] = {
        {"102","xiao ming",'M',55.0},
        {"120","xiao hong",'F',45.5},
        {"113","xiao hua",'F',87.0},
        {"100","zhang san",'M',85.0},
        {"130","li si",'M',88.0}
};

int main(void){
    struct stu *p;
    void ave(struct stu *p);
    p = student;
    ave(p);
}


void ave(struct stu *p){
    int count = 0;
    float ave,s = 0.0;
    for(int i = 0;i < 5;i++,p++){
      if(p -> score < 60){
          count++;
       }
     s += p->score;
    }

    ave = s / 5;

    printf("count = %d,ave = %f\n",count,ave);
    return 0;
    

}