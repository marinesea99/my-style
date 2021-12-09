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
        printSpace(10-i);///印出很多空白
        printStar( i );///印出很多的星星
        printf("\n");
    }
}
