///剝皮法
#include <stdio.h>
int main()
{
    int N=1234567892;
    ///N/10 前面的位數
    ///N%10 取餘數
    while( N > 0 ){
        printf("%d => %d %d\n", N, N/10, N%10);
        N = N / 10;
    }
}
