#include <stdio.h>
#include <string.h>

int main(){
    char str1[11],str2[]="Hello world";

    strcpy(str1,str2);
    puts(str1);

    return 0;
}