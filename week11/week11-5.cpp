#include <stdio.h>
int a[100];
int main()
{///(1) input
	for(int i=0;i<100;i++){
		scanf("%d",&a[i]);
	}
	///���U��,�ڭ̭n�Ϊw�w�ƧǪk
	for(int k=0;k<100-1;k++){///(6) �n���X��? 100-1��
		for(int i=0;i<100-1;i++){///(5)�n�q����k ���@��
			if(a[i]>a[i+1]){///(3) a[i] a[i+1]���
				int temp=a[i];///(4)���諸�ɭ�,�~�洫
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(int i=0;i<100;i++){///(2)output
		printf("%d\n",a[i]);
	}
}
