#include <stdio.h>
#include <string.h>


//可用指针数组来表示二维数组
int main(void){
    int a[3][3] = {{10,20,40},{30,12,17},{23,36,48}};
    int *pa[3] = {a[0],a[1],a[2]};
    printf("%d\n",a[1][1]);
    printf("%d\n",*(*(a+1)+1));
    printf("%d\n",*pa[1]);
    return 0;
}
