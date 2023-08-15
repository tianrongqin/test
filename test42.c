//写一个程序：按要求实现以下功能：
//A、输入一串字符串，具体格式如下：
//“1@1@1=0511-1832!1!1@2=0014-1459!2!1@3=0011-2314!3!1@4=0113-1413!4!1@5=0913-1815!5!1@6=0114-1814!6!1@7=0116-1716!0!1”
//字符串说明：
//1=0511-1832：表示周一：5点11分到18点32分
//2=0014-1459：表示周二：0点14分到14点59分
//3=0011-2314：表示周三：0点11分到23点14分
//4=0113-1413：表示周四：1点13分到14点13分
//5=0913-1815：表示周五：9点13分到18点15分
//6=0114-1814：表示周六：1点14分到18点14分
//7=0116-1716：表示周日：1点16分到17点16分
//B、判断当前时间是否在上述时间段范围内，如果是直接打印“yes”,如果不是，直接打印“no”
//C、输入的字符串改变时间段之后，程序也要能够正常判断。如1@1@1=0511-1832改为1@1@1=1011-2330

//获取当前时间，并且提取当前输入的字符串里面包含的时间，来判断当前的时间是否在上述时间的范围之内

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    char *st = (char *)malloc(sizeof(char)*201);
    char tst[201];
    printf("please input string:");
    scanf("%s",tst);
    printf("tst = %s",tst);
    strcpy(st,tst);
    printf("st = %s",st);
    //设置两个一维数组，一个存放周几，一个存放时间段
    char *weekday = (char *)malloc(sizeof(char)*8);
    char *timeSlot = (char *)malloc(sizeof(char)*57);
    int n = 0;
    int k = 0;
    //以等号为分割线，获取周几以及时间段
    for(int i = 0;*(st + i) != '\0';i++){
        if(*(st + i) == '='){
            printf("i == %d\n",i);
            char tnum = *(st + i - 1);
            *(weekday + n) = tnum;
            n++;
            for(int j = i + 1;j < (10 + i);j++){
                if(*(st + j) != '-') 
                {
                    *(timeSlot + k) = *(st + j);
                    k++;
                }
            }
        }
    }
    *(weekday + 7) = '\0';
    *(timeSlot + 56) = '\0';
    printf("weekday = %s\n",weekday);
    printf("timeSlot = %s\n",timeSlot);

    //获取当前的时间，先获取周几
    time_t time0;
    time0 = time(NULL);
    char *pctime = ctime(&time0);
    printf("%s\n",pctime);
    //获取第一个空格前的字符串
    char *nowWeek = (char *)malloc(sizeof(char)*3);
    int p = 0;
    for(int i = 0;;i++){
        if(pctime[i] == ' ') break;
        else {
            *(nowWeek + p) = pctime[i];
            p++;
        }
    }
    printf("nowWeek = %s\n",nowWeek);
    //获取第一个:前后的数据
    char *nowTime = (char *)malloc(sizeof(char)*5);
    for(int i = 0;;i++){
        if(pctime[i] == ':'){
            *nowTime = pctime[i - 2];
            *(nowTime + 1) = pctime[i - 1];
            *(nowTime + 2) = pctime[i + 1];
            *(nowTime + 3) = pctime[i + 2];
            *(nowTime + 4) = '\0';
            break;
        }
    }
    printf("nowTime = %s\n",nowTime);
    // //当前已经获取到了周几以及时分,判断周几并且找到输入字符串的时间段
    char *beginTime = (char *)malloc(sizeof(char)*5);
    char *endTime = (char *)malloc(sizeof(char)*5);;
    int q = 0;
    if(*nowWeek == 'M' && *(nowWeek + 1) == 'o' && *(nowWeek + 2) == 'n'){
        for(int i = 0;i < 4;i++){
            *(beginTime + q) = timeSlot[i];
            q++;
        }
        *(beginTime + 4) = '\0';
        q = 0;
        for(int i = 4;i < 8;i++){
            *(endTime + q) = timeSlot[i];
            q++;
        }
        *(endTime + 4) = '\0';
    }
    else if(*nowWeek == 'T' && *(nowWeek + 1) == 'u' && *(nowWeek + 2) == 'e'){
          for(int i = 8;i < 12;i++){
            *(beginTime + q) = timeSlot[i];
            q++;
          }
          *(beginTime + 4) = '\0';
          q = 0;
          for(int i = 12;i < 16;i++){
             *(endTime + q) = timeSlot[i];
             q++;
          }
          *(endTime + 4) = '\0';
    }
    else if(*nowWeek == 'W' && *(nowWeek + 1) == 'o' && *(nowWeek + 2) == 'n'){
          for(int i = 16;i < 20;i++){
            *(beginTime + q) = timeSlot[i];
            q++;
          }
          *(beginTime + 4) = '\0';
          q = 0;
          for(int i = 20;i < 24;i++){
             *(endTime + q) = timeSlot[i];
             q++;
          }
          *(endTime + 4) = '\0';
    }
    else if(*nowWeek == 'T' && *(nowWeek + 1) == 'h' && *(nowWeek + 2) == 'u'){
        printf("today is Thu!\n");
          for(int i = 24;i < 28;i++){
            *(beginTime + q) = *(timeSlot + i);
            q++;
          }
          *(beginTime + 4) = '\0';
          q = 0;
          for(int i = 28;i < 32;i++){
               *(endTime + q) = *(timeSlot + i);
               q++;
          }
           *(endTime + 4) = '\0';
    }
    else if(*nowWeek == 'F' && *(nowWeek + 1) == 'r' && *(nowWeek + 2) == 'i'){
          for(int i = 32;i < 36;i++){
             *(beginTime + q) = timeSlot[i];
             q++;
          }
          *(beginTime + 4) = '\0';
          q = 0;
          for(int i = 36;i < 40;i++){
             *(endTime + q) = timeSlot[i];
             q++;
          }
           *(endTime + 4) = '\0';
    }
    else if(*nowWeek == 'S' && *(nowWeek + 1) == 'a' && *(nowWeek + 2) == 't'){
          for(int i = 40;i < 44;i++){
            *(beginTime + q) = timeSlot[i];
             q++;
          }
          *(beginTime + 4) = '\0';
          q = 0;
          for(int i = 44;i < 48;i++){
             *(endTime + q) = timeSlot[i];
             q++;
          }
          *(endTime + 4) = '\0';
    }
    else if(*nowWeek == 'S' && *(nowWeek + 1) == 'u' && *(nowWeek + 2) == 'n'){
          for(int i = 48;i < 52;i++){
            *(beginTime + q) = timeSlot[i];
             q++;
          }
          *(beginTime + 4) = '\0';
          q = 0;
          for(int i = 52;i < 56;i++){
             *(endTime + q) = timeSlot[i];
             q++;
          }
          *(endTime + 4) = '\0';
    }
    // //比较当前时间是否在时间段里面
    int begin = strcmp(beginTime,nowTime);
    int end = strcmp(nowTime,endTime);
    printf("beginTime = %s\n",beginTime);
    printf("endTime = %s\n",endTime);
    printf("begin = %d\n",begin);
    printf("end = %d\n",end);
    if(begin < 0 && end < 0){
        printf("OK\n");
    }
    else{
        printf("NO OK\n");
    }

    free(st);
    free(weekday);
    free(timeSlot);
    free(pctime);
    free(nowWeek);
    free(beginTime);
    free(endTime);
    return 0;

    



}