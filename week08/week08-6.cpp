#include <stdio.h>

int main()
{
    printf("1: *\n");
    printf("2: **\n");
    printf("3: ***\n");
    printf("4: ****\n");///���I:�Ӧh��

    int n=4;
    for(int i=1;i<=n;i++){
        printf("%d: ",i);///�N�[�Ai�h��
        ///i�h�ӡA��i���P
        for(int k=1;k<=i;k++) printf("*");

        printf("\n");
    }
}
