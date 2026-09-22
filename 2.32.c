#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("chcp 65001>nul");

    float h,w,BMI;
    printf("請輸入你的體身高:");
    scanf("%f",&h);
    h=h/100;
    printf("請輸入你的體重:");
    scanf("%f",&w);

    BMI=w/h/h;
    printf("你的BMI為:%.2f\n",BMI);

    if(BMI<18.5)
    {
        printf("體重過輕\n");
    }
    else if(BMI>=18.5&&BMI<=24.9)
    {
        printf("體重適中\n");
    }
    else if(BMI>=25&&BMI<=29.9)
    {
        printf("體重過重\n");
    }
    else
    {
        printf("肥胖\n");
    }
    return 0;
}