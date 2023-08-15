#include <stdio.h>
#include <string.h>

//字符指针的练习
int main(void){
    char *name[] = {
        "Illegal day",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };
    char *ps;
    int i;
    char *day_name(char *name[],int n);
    printf("please input number:");
    scanf("%d",&i);
    ps = day_name(name,i);
    printf("Today is %s",ps);
    return 0;    
}

char *day_name(char *name[],int n){
    char *temp_day1,*temp_day2;
    temp_day1 = *name;
    temp_day2 = *(name + n);
    return ((n < 1 || n > 7) ? temp_day1 : temp_day2);  
}