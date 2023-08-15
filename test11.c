#include <stdio.h>
#include <string.h>

//其实内容和test10.c一样，但是这里采用函数来解决互换问题
void swap(int *p1,int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
}
int main(void){
    int a ,b;
    int *p1,*p2;
    printf("please enter two numbers:");
    scanf("%d %d",&a,&b);
    p1 = &a;
    p2 = &b;
    if(a > b){
        printf("max = %d,min = %d\n",*p1,*p2);
    }
    else{
        swap(p1,p2);
        printf("max = %d,min = %d\n",*p1,*p2);
    }
    return 0;
}



//这里出现一个问题，就是如果将swap函数里面的int整数类型换成int整数指针类型的时候，会发现在main中执行了swap函数后p1,p2并不能进行交换
//原因：因为在swap中是将两个指针进行复制，也就是说新的p1和p2分别和原先的p1和p2指向对应的地址上，只有改变了这两个地址里面存储的值，才能实现真正地交换，如果是通过地址交换，在swap结束后，新的p1,p2就消失了，对原先的p1和p2并不会产生任何的影响。