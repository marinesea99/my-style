#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a%b;
    printf("老大:%d 老二:%d 老三:%d\n",a,b,c);
    while(1){
        if(c==0){
            printf("因為c是0,就break離開迴圈\n");
            break;///離開迴圈
        }
        a=b;
        b=c;
        c=a%b;
        printf("老大:%d 老二:%d 老三:%d\n",a,b,c);
    }
    printf("離開迴圈後,答案是:b %d \n", b);

}
