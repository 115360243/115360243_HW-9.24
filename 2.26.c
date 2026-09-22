#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("chcp 65001>nul");
    int n1,n2;
    printf("請輸入兩個數字:");
    scanf("%d%d",&n1,&n2);
    if(n1%n2==0)
    {
        printf("%d 是 %d 的倍數\n",n1,n2);
    }
    else
    {
        printf("%d 不是 %d 的倍數\n",n1,n2);
    }
    return 0;
}