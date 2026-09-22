#include <stdio.h>
int main()
{
    for(int i=0;i<9;i++)
    {
        if(i==0||i==8)
        {
            for(int a=0;a<3;a++)
            {
                printf(" ");
            }
            for(int b=0;b<3;b++)
            {
                printf("*");
            }
            for(int a=0;a<3;a++)
            {
                printf(" ");
            }
            printf("\n");
        }
        else if(i==1||i==7)
        {
            printf(" ");
            printf("*");
            for(int a=0;a<5;a++)
            {
                printf(" ");
            }
            printf("*");
            printf(" \n");
        }
        else
        {
            printf("*");
            for(int a=0;a<7;a++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    return 0;
}