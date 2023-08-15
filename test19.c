#include <stdio.h>
#include <string.h>

//采用函数进行数组的调转

void inv(int a[],int n){
    int m = (n-1) / 2;
    for(int i = 0;i < m;i++){
        int temp;
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i] = temp;
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