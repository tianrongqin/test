#include <stdio.h>

int main(void){
    enum weekday{
        sun,mon,tue,wed,thu,fri,sat
    }a,b,c;

    a = sun;
    b = mon;
    c = tue;

    printf("%d %d %d\n",a,b,c);

    return 0;
}