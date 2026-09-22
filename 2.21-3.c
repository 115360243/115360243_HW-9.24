#include<stdio.h>
int main()
{
    for(int i=0;i<9;i++)
    {
        if(i==1)
        {
            printf(" ");
            for(int a=0;a<3;a++)
            {
                printf("*");
            }
            printf("\n");
        }
        else if(i==2)
        {
            for(int a=0;a<5;a++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            printf("  ");
            printf("*");
            printf("\n");
        }
    }
    return 0;
}