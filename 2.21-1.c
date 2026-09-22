#include <stdio.h>
int main()
{
    for(int i=0;i<9;i++)
    {
        if(i==0||i==8)
        {
            for(int a=0;a<9;a++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            printf("*");
            for(int b=0;b<7;b++)
            {
                printf(" ");
            }
            printf("*\n");
        }
           
    }
    return 0;
}