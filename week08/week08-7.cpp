#include <stdio.h>

int main()
{
    int n=4;

    for(int i=1;i<=n;i++){
        printf("%d: ",i);///�N�[�Ai�h��
        ///i�h�ӡA��i���P
        for(int k=1;k<=i;k++) printf(" ");
        for(int k=1;k<=n;k++) printf("*");

        printf("\n");
    }
}
