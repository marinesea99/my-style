#include <stdio.h>

int main()
{///�p�� m �H�U���������
    int m;
    scanf("%d",&m);

    for(int n=2;n<=m;n++){
        int bad=0;///�S���a���A�S���ѹ���
        for(int i=2;i<n;i++){///�u�P�_ 2....n-1
            if(n%i==0) bad++;///�㰣�F�A���O���
        }
        if(bad==0) printf("%d ",n);
    }
}

