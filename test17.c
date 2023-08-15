#include <stdio.h>
#include <string.h>

//这里跟test15,test16内容一样，只是这里是采用数组名计算各元素的地址
int main(void){
   int a[5] = {1,43,549,10,40};
   for(int i = 0 ;i < 5;i++){
    printf("a[%d] = %d\n",i,*(a+i));
   }
   return 0;
}