#include <stdio.h>
#include <string.h>

//进行复制操作
void cpystr(char *pa1,char *pb1){
    while((*pb1 = *pa1) != '\0'){
        pa1++;
        pb1++;
    }
}
int main(void){
    char *pa = "China",a[10],*pb;
    pb = a;
    cpystr(pa,pb);
    printf("%s\n",pa);
    printf("%s\n",pb);
    return 0;
}