#include <stdio.h>
#include <string.h>

//与test15.c内容一样，只是这里是采用指针的方法进行
int main(void){
   int a[5] = {1,43,549,10,40};
   int *p = a;
   for(int i = 0;i < 5;i++){
    printf("a[%d] = %d\n",i,*p++);
   }
   return 0;
}