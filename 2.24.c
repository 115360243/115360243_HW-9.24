#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("請輸入一個數字:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("偶數");
    }
    else
    {
        printf("奇數");
    }
    return 0;
}