#include <stdio.h>
#include <stdlib.h>

//#define NULL 0
#define NULL ((void *)0)
#define TYPE struct stu
#define LEN sizeof(struct stu)

struct stu
{
    int num;
    int age;
    struct stu *next;
};

TYPE *create(int n){
    struct stu *head,*pf,*pb;
    for(int i = 0;i < n;i++){
          pb = (TYPE*) malloc(LEN);
          printf("please input num and age:");
          scanf("%d %d",&pb -> num,&pb -> age);
          if(i == 0) pf = head = pb;
          else pf -> next = pb;
          pb -> next = NULL;
          pf = pb;
    }

    return (head);

} 

int main(void){
    struct stu *result;
    result =  create(2);
    for(int i = 0;i < 2;i++){
        printf("num = %d,age = %d\n",result->num,result->age);
        result = result -> next;
    }
    return 0;
}