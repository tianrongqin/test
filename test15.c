#include <stdio.h>
#include <string.h>

//使用下标法输出数组的全部元素
int main(void){
  int a[5] = {1,43,549,10,40};
  for(int i = 0;i < 5;i++){
    printf("a[%d] = %d\n",i,a[i]);
  }

  return 0;
}