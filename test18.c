#include <stdio.h>
#include <string.h>


//实参也可以作为函数的形参,以求平均值为例
float avg(float *t1,float *t2,float *t3){
    float avg;
    avg = (*t1+*t2+*t3) / 3;
    return avg;
}
int main(void){
    float a,b,c,*p1,*p2,*p3;
    float result;
    printf("please input three numbers:");
    scanf("%f %f %f",&a,&b,&c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    result = avg(p1,p2,p3);
    printf("result = %f\n",result);
    return 0;
}