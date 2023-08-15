#include <stdio.h>
#include <string.h>

int main(void){
    int a = 10,b = 100,*p,*q,s,t;
    p = &a;
    q = &b;
    s = *p + *q;
    t = *p * *q;
    printf("s = %d,t = %d",s,t);
    return 0;
}