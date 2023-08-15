#include <stdio.h>
#include <string.h>

int main(void){
    int a,b,c,*pmax,*pmin;
    printf("please input three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a > b){
        pmax = &a;
        pmin = &b;
    }else{
        pmax = &b;
        pmin = &a;
    }
    if(c > *pmax){
        pmax = &c;
    }
    if(c < *pmin){
        pmin = &c;
    }
    printf("max = %d,min = %d",*pmax,*pmin);
    return 0;
}