#include <stdio.h>
char line[300];
int main()
{
    printf("�п�J�A���r��: ");
    scanf("%s",line);
    printf("����J���O=%s=",line);

    int ans=0;///�ڭ̷Q���D,���line�̭����X��1
    int i=0;
    while(line[i] != '\0')
    {
        if(line[i] == '1') ans++;
        i++;
    }
    printf("�A����J�F%d��1\n",ans);
}
