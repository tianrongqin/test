//结构体可以有三种表示形式
//在定义结构，再说明结构变量
struct stu{
    int num;
    char name[20];
    char sex;
    float score;
};
struct stu boy1,boy2;




//直接进行宏定义
#define STU struct stu;
STU
{
    int num;
    char name[20];
    char sex;
    float score;
};
STU boy1,boy2;


//直接说明结构变量
struct stu
{
    int num;
    char name[20];
    char sex;
    float score;
}boy1,boy2;



