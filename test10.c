#include <stdio.h>
#include <string.h>

//使用指针将两个数按大小进行先后顺序的输出
int main(void){
    int a,b;
    int *p1,*p2,*p;
    printf("please enter two numbers:");
    scanf("%d %d",&a,&b);
    p1 = &a;
    p2 = &b;
    if(a > b){
        printf("max = %d，min = %d",*p1,*p2);
    }else{
        p = p1;
        p1 = p2;
        p2 = p;
        printf("max = %d,min = %d",*p1,*p2);
    }
    return 0;
}