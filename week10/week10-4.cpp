#include <stdio.h>
int a[10000000]={0,0,0,0};///�S���g��,���|��0
///�~���ŧi���ܼ�,�i�H����hmemory�Ŷ�
///0:�S�Q����,1:�Q����!!!
int main()
{
    int ans=0;
    for(int i=2;i<10000000;i++){
    ///(1)��X�S�Q���������,����
    ///a[i]�d�ݥL���S���Q����
        if(a[i]==0){///���li,�S�������li
            ans++;
            ///printf("%d ", i);///�|�ܰ��i
            ///(2)�����L���S��
            for(int k=i+i;k<10000000;k=k+i) a[k]=1;
        }
    }
    printf("ans:%d",ans);
}
