#include <stdio.h>
#include <string.h>

//将三个数从大到小输出
void swap(int *p1,int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swapThree(int *p1,int *p2,int *p3){
    if(*p1 < *p2) swap(p1,p2);
    if(*p1 < *p3) swap(p1,p3);
    if(*p2 < *p3) swap(p2,p3);
}

int main(void){
    int a,b,c;
    printf("please enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    swapThree(&a,&b,&c);
    printf("max = %d,middle = %d,min = %d",a,b,c);
    return 0;
}