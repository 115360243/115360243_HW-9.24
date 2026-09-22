#include<stdio.h>
int main()
{
    for(int i=0;i<9;i++)
    {
        if(i==0||i==8)
        {
            printf("*********");
            printf("    ");
            printf("   ***   ");
            printf("    ");
            printf("    *    ");
            printf("    ");
            printf("    *    ");
            printf("\n");
        }
        else if(i==1)
        {
            printf("*       *");
            printf("    ");
            printf(" *     * ");
            printf("    ");
            printf("   ***   ");
            printf("    ");
            printf("   * *   ");
            printf("\n");
        }
        else if(i==2)
        {
            printf("*       *");
            printf("    ");
            printf("*       *");
            printf("    ");
            printf("  *****  ");
            printf("    ");
            printf("  *   *  ");
            printf("\n");
        }
        else if(i==3||i==5)
        {
            printf("*       *");
            printf("    ");
            printf("*       *");
            printf("    ");
            printf("    *    ");
            printf("    ");
            printf(" *     * ");
            printf("\n");
        }
        else if(i==4)
        {
            printf("*       *");
            printf("    ");
            printf("*       *");
            printf("    ");
            printf("    *    ");
            printf("    ");
            printf("*       *");
            printf("\n");
        }
        else if(i==6)
        {
            printf("*       *");
            printf("    ");
            printf("*       *");
            printf("    ");
            printf("    *    ");
            printf("    ");
            printf("  *   *  ");
            printf("\n");
        }
        else
        {
            printf("*       *");
            printf("    ");
            printf(" *     * ");
            printf("    ");
            printf("    *    ");
            printf("    ");
            printf("   * *   ");
            printf("\n");
        }
    }
    return 0;
}