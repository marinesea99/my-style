#include <stdio.h>
void printStar(int n)
{
    for(int i=0;i<n;i++) printf("*");
}
int main()
{
    for(int i=1;i<=10;i++){
        printStar( i );///印出很多的星星
        printf("\n");
    }
}
