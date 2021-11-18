#include <stdio.h>
int a[10000000]={0,0,0,0};///沒有寫的,都會補0
///外面宣告的變數,可以比較多memory空間
///0:沒被殺死,1:被殺死!!!
int main()
{
    int ans=0;
    for(int i=2;i<10000000;i++){
    ///(1)找出沒被殺死的質數,當國王
    ///a[i]查看他有沒有被殺死
        if(a[i]==0){///王子i,沒死的王子i
            ans++;
            ///printf("%d ", i);///會變國王i
            ///(2)殺光他的兄弟
            for(int k=i+i;k<10000000;k=k+i) a[k]=1;
        }
    }
    printf("ans:%d",ans);
}
