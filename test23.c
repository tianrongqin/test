#include <stdio.h>
#include <string.h>


//这是对二维指针的练习
int main(void){
    int a[3][4] = {{1,40,30,20},{10,30,50,60},{8,90,9,5}};
    printf("%d\n",a); //这里输出二维数组第0行第0列的地址，也就是第0行的首地址
    printf("%d\n",*a); //功能同上
    printf("%d\n",a[0]); //功能同上
    printf("%d\n",*(a + 1)); //这里输出的是二维数组第1行的首地址
    printf("%d\n",*(*(a+1) + 1)); //这里输出的是二维数组第一行第一列的数据
    return 0;
}