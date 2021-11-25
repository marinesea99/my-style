#include <stdio.h>
int a[10]={9,8,7,6,5,4,3,2,1};
int main()
{
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");///印出陣列

    for(int k=0;k<10-1;k++){
        for(int i=0;i<10-1;i++){
            if(a[i]>a[i+1]){///如果相鄰2人,大小不對
                int temp=a[i];///交換成對的順序
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0;i<10;i++) printf("%d ",a[i]);
        printf("\n");///印出陣列
    }
}
