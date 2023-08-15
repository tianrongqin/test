#include <stdio.h>
#include <string.h>


//输入5个国名，按照国名的字母进行排序
int main(void){
    void sort(char *name[],int n);
    void print(char *name[],int n);
    char *contury_name[] = { "CHINA","AMERICA","AUSTRALIA","FRANCE","GERMAN"};
    int n = 5;
    sort(contury_name,n);
    print(contury_name,n);
    return 0;
}

void sort(char *name[],int n){
    char *pt;
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(strcmp(name[i],name[j]) > 0){
                pt = name[i];
                name[i] = name[j];
                name[j] = pt;
            }
        }
    }
}

void print(char *name[],int n){
     for(int i = 0;i < n;i++){
        printf("%s\n",name[i]);
     }
}