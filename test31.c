#include <stdio.h>
#include <string.h>


int main(void){
    int num[] = {20,40,30,50,10};
    int *temp[5] = {&num[0],&num[1],&num[2],&num[3],&num[4]};
    int **p;
    p = temp;
    for(int i = 0;i < 5;i++){
        printf("%d\n",**p);
        p++;
    }

    return 0;
}