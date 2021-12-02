#include <stdio.h>
int a[100];
int main()
{
    for(int i=0;i<100;i++){
    	scanf("%d",&a[i]);
    }

    for(int i=0;i<100;i++){///左手i
        for(int j=i+1;j<100;j++){///右手j
            if(a[i]>a[j]){///比較,希望左邊小
                int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
            }
        }
    }

    for(int i=0;i<100;i++){
    	printf("%d\n",a[i]);
    }
}
