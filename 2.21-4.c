#include<stdio.h>
int main()
{
    for(int i=0;i<9;i++)
    {
        if(i==0||i==8)
        {
            printf("    ");
            printf("*");
            printf("\n");
        }
        else if(i==1||i==7)
        {
            printf("   ");
            printf("*");
            printf(" ");
            printf("*");
            printf("\n");
        }
        else if(i==2||i==6)
        {
            printf("  ");
            printf("*");
            printf("   ");
            printf("*");
            printf("\n");
        }
        else if(i==3||i==5)
        {
            printf(" ");
            printf("*");
            printf("     ");
            printf("*");
            printf("\n");
        }
        else
        {
            printf("*");
            printf("       ");
            printf("*");
            printf("\n");
        }

    }
    return 0;
}