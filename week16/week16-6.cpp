#include <stdio.h>
#include <string.h>///為了strlen()
char line[300]="1010101011110111001";
int main()
{
    int ans=0;
    int N=strlen(line);
    for(int i=0;i<N;i++)
    {
        if( line[i] == '1' ) ans++;
    }
    printf("有%d個1\n",ans);
}
