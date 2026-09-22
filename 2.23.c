#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("chcp 65001");
    
    int n1, n2, n3;
    printf("請輸入三個整數:");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("最大整數:%d\n", n1);
        if (n2 > n3)
        {
            printf("最小整數:%d\n", n3);
        }
        else
        {
            printf("最小整數:%d\n", n2);
        }
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("最大整數:%d\n", n2);
        if (n1 > n3)
        {
            printf("最小整數:%d\n", n3);
        }
        else
        {
            printf("最小整數:%d\n", n1);
        }
    }
    else
    {
        printf("最大整數:%d\n", n3);
        if (n1 < n2)
        {
            printf("最小整數:%d\n", n1);
        }
        else
        {
            printf("最小整數:%d\n", n2);
        }
    }
    return 0;
}