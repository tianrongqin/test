#include <stdio.h>
#include <string.h>

//内容和test19.c一样，只是将函数的形参改成指针

void inv(int *x,int n){
    int *i,*j,*p,m,temp;
    i = x;
    m = (n - 1) / 2;
    j = x + n - 1;
    p = x + m;
    for(;i < p;i++,j--){
        temp = *i;
        *i = *j;
        *j = temp;
    }
  
}

int main(void){
    int a[10] = {2,4,5,1,7,0,3,8,6,9};
    for(int i = 0;i < 10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    inv(a,10);
    for(int j = 0;j < 10;j++){
        printf("%d ",a[j]);
    }
    return 0;
}