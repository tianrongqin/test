#include <stdio.h>
#include <string.h>

int main(void){
    int a = 10,b = 100;
    int *p1,*p2;
    p1 = &a;
    p2 = &b;
    printf("%d %d",*p1,*p2);
    return 0;
}