#include <stdio.h>
#include <string.h>

//从10个数里面找出最大值和最小值，采用指针形参的函数
int getMax(int *x,int n){
   int tmax = *x;
   int *i;
   i = x + 1;
   for(;i < x + n;i++){
      if(tmax < *i){
        tmax = *i;
      }
   }
   return tmax;
}

int getMin(int *y,int n){
    int tmin = *y;
    int *i;
    i = y + 1;
    for(;i < y + n;i++){
       if(tmin > *i){
          tmin = *i;
      }
   }
   return tmin;
}


int main(void){
    int a[10] = {10,40,27,50,20,540,304,60,9,70};
    int max,min;
    max = getMax(a,10);
    min = getMin(a,10);
    printf("max = %d\n",max);
    printf("min = %d",min);
}