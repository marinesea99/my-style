#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int bad=0;///沒有壞掉，沒有老鼠屎

    for(int i=2;i<n;i++){///只判斷 2....n-1
        if(n%i==0) bad++;///整除了，不是質數
    }

    if(bad==0) printf("%d是質數",n);///沒有老鼠屎
    else printf("%d壞掉了，不是質數",n);
}
