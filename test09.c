#include <stdio.h>
#include <string.h>


//判断一下(p1)++和p1++的区别
int main(void){
   int a = 100;
   int *p1;
   p1 = &a;
   printf("%d\n",*(p1)++);
   printf("%d\n",*p1++);
   return 0;
}

//在交换两者之间的顺序之后，发现这两个的结果是一样的！