#include <stdio.h>
int box(int a,int b)
{
    int ans;
    if( a==0 ){
      ans=b;
      return ans;
    }
    if( b==0 ){
      ans=a;
      return ans;
    }
    ans=box( b, a%b );
    return ans;
}
int main()
{
    int a=987654321,b=123456789;
    //scanf("%d %d",&a,&b);

    int ans = box( a, b);
    printf("%d", ans);
}
