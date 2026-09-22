#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("chcp 65001>nul");

    float TM,GC,AMG,PF,TP,TC;
    printf("請輸入一整天的總里程數:");
    scanf("%f",&TM);
    printf("請輸入汽油一公升/加侖多少錢:");
    scanf("%f",&GC);
    printf("請輸入平均一公升/加侖能行駛多少公里:");
    scanf("%f",&AMG);
    printf("請輸入一天的停車費:");
    scanf("%f",&PF);
    printf("請輸入一天的通行費(過路費):");
    scanf("%f",&TP);

    TC=TM/AMG*GC+PF+TC;
    printf("開車出行一天之花費:%.2f",TC);
    return 0;
}