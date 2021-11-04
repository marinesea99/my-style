#include <stdio.h>

int main()
{///計算 m 以下的全部質數
    int m;
    scanf("%d",&m);

    for(int n=2;n<=m;n++){
        int bad=0;///沒有壞掉，沒有老鼠屎
        for(int i=2;i<n;i++){///只判斷 2....n-1
            if(n%i==0) bad++;///整除了，不是質數
        }
        if(bad==0) printf("%d ",n);
    }
}

