#include <stdio.h>


//使用结构体计算平均分和不及格人数
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
    float avg;
    float sum = 0.0;
    int count = 0;

    for(int i = 0;i < 5;i++){
        sum += student[i].score;
        if(student[i].score < 60) count++;
    }
    
    avg = sum / 5;
    printf("count = %d,avg = %f\n",count,avg);

    return 0;


}