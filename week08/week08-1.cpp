#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int ans=1;

    for(int i=1;i<=n;i++){
        ans *= i;///ans=ans*i
    }
    printf("%d",ans);
}
