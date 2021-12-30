#include <stdio.h>
char line[300];
int main()
{
    printf("請輸入你的字串: ");
    scanf("%s",line);///不用 & 記憶的怪方法: %s 有s,哈哈!

    ///int n;
    ///scanf("%d",&n);

    printf("剛剛輸入的是=%s=",line);
}
