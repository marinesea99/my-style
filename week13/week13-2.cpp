#include <stdio.h>///為了printf()
#include <stdlib.h>///為了system()作業系統
///(1) 自定函式 custom function 功能,函數f(x)
int main()
{
    printf("下面是 system() 出來的結果\n");
    system("dir");///(3) 呼叫別人的函式 system
    printf("*");///(2) 呼叫別人的函式 printf
    return 0;
}
