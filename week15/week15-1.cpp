#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    ///程そ计: 俱埃程ê计
    int ans=1;
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("%d",ans);
}
