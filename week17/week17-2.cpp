///��֪k
#include <stdio.h>
int main()
{
    int N=1234567892;
    ///N/10 �e�������
    ///N%10 ���l��
    while( N > 0 ){
        printf("%d => %d %d\n", N, N/10, N%10);
        N = N / 10;
    }
}
