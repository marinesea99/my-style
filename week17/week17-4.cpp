#include <stdio.h>
int f(int N)///step04�禡
{
	int sum=0;///step03
	while( N>0 ){///step02 while�@����
		sum += N%10;///step01 ���
		N = N/10;///step02 N�ܤp
	}
	return sum;///step03
}
int main()
{
	int N;
	while( scanf("%d",&N)==1 ){///step06 while�j��@��Ū
		if(N==0) break;///step05 �J��0�N����
		int ans=f( f( f(N) ) );///step04�禡
		printf("%d\n",ans);
	}
}
