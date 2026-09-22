#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        if(i==0||i==4)
        {
            printf(" ");
            for(int a=0;a<8;a++)
            {
                printf("W");
            }
            printf("\n");
        }
        else if(i==1||i==3)
        {
            printf("W\n");
        }
        else
        {
            printf(" ");
            for(int a=0;a<5;a++)
            {
                 printf("W");
            }
           printf("\n");
        }
    }
    printf("\n");
    for(int i=0;i<5;i++ )
    {
        if(i==0)
        {
            for(int a=0;a<9;a++)
            {
                printf("P");
            }
            printf("\n");
        }
        else if(i==4)
        {
            printf("      ");
            printf("PP");
            printf(" \n");
        }
        else
        {
            printf("    ");
            printf("P");
            printf("   ");
            printf("P\n");
        }
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        if(i==0||i==4)
        {
            printf("     ");
            printf("YYYY\n");
        }
        else if(i==1||i==3)
        {
            printf("    ");
            printf("Y\n");
        }
        else
        {
            printf("YYYY\n");
        }
    }
   return 0;
}