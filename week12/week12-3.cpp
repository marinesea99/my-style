#include <stdio.h>///�j��
int a[8]={2,0,2,1,1,2,0,2};
int main()
{
    for(int i=0;i<8;i++){
        if(a[i]==a[8-1-i]){
            printf("%d %d �ۦP\n",a[i],a[8-1-i]);
        }
    }
}
