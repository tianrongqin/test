#include <stdio.h>
#include <string.h>


//跟test21.c相比，可以直接设置全局变量
int max,min;
void compare(int *x,int n){
    max = min = *x;
    int *j = x + 1;
    for(;j < x + n;j++){
        if(max < *j){
            max = *j;
        }
        if(min > *j){
            min = *j;
        }
    }
}
int main(void){
    int a[10] = {10,300,400,200,499,399,599,50,8,40};
    compare(a,10);
    printf("max = %d,min = %d",max,min);
    return 0;
}