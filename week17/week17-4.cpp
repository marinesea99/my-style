#include <stdio.h>
int f(int N)///step04函式
{
	int sum=0;///step03
	while( N>0 ){///step02 while一直剝
		sum += N%10;///step01 剝皮
		N = N/10;///step02 N變小
	}
	return sum;///step03
}
int main()
{
	int N;
	while( scanf("%d",&N)==1 ){///step06 while迴圈一直讀
		if(N==0) break;///step05 遇到0就結束
		int ans=f( f( f(N) ) );///step04函式
		printf("%d\n",ans);
	}
}
