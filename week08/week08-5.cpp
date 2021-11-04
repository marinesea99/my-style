#include <stdio.h>

int main()
{
    printf("1: *\n");
    printf("2: **\n");
    printf("3: ***\n");
    printf("4: ****\n");///缺點:太多行

    int n=4;
    for(int i=1;i<=n;i++){
        printf("%d: \n",i);///鷹架，有幾層樓
    }
}
