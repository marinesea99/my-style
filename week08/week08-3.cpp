#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int bad=0;///�S���a���A�S���ѹ���

    for(int i=2;i<n;i++){///�u�P�_ 2....n-1
        if(n%i==0) bad++;///�㰣�F�A���O���
    }

    if(bad==0) printf("%d�O���",n);///�S���ѹ���
    else printf("%d�a���F�A���O���",n);
}
