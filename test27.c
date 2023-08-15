#include <stdio.h>
#include <string.h>

//函数指针变量 ,以输出最大值为例
int max(int x,int y){
    if(x > y) return x;
    else return y;
}

int main(void){
    int max(int x,int y);
    int (*pmax)();
    pmax = max;
    int a,b,c;
    printf("please input two numbers:");
    scanf("%d %d",&a,&b);
    c = (*pmax)(a,b);
    printf("max = %d\n",c);
    return 0;

}