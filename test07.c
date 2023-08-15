#include <stdio.h>
#include <string.h>

int  main(){
    static char str[] = "hello world";
    int length;
    
    length = strlen(str);
    printf("length = %d",length);

    return 0;
}