#include <stdio.h>
void printStar(int n)
{
    for(int i=0;i<n;i++) printf("*");
}
void printSpace(int n)
{
    for(int i=0;i<n;i++) printf(" ");
}
int main()
{
    for(int i=1;i<=10;i++){
        printSpace(10-i);///�L�X�ܦh�ť�
        printStar( i );///�L�X�ܦh���P�P
        printf("\n");
    }
}
