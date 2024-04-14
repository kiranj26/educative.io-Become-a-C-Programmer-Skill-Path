// Pyramids
#include<stdlib.h>
#include <stdint.h>
#include <stdio.h>

// a
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * * * 
void printpatterna(int n)
{
    for (int i = 0;i < n; i++)
    {
        for (int j = 0; j <= i;j++)
        {
            printf("* ");
            //printf("%d ",i);
        }
        printf("\n");
    }
}

/* 
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6 
 */
void printpatternb(int n)
{
    for (int i = 0;i < n; i++)
    {
        for (int j = 0; j <= i;j++)
        {
            // printf("* ");
            printf("%d ",i+1);
        }
        printf("\n");
    }
}
/* 
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6  */

void printpatternc(int n)
{
    for (int i = 0;i < n; i++)
    {
        for (int j = 0; j <= i;j++)
        {
            // printf("* ");
            printf("%d ",j + 1);
        }
        printf("\n");
    }
}

void printpatternd(int n)
{
    for (int i = 0;i < n; i++)
    {
        for (int j = 0; j <= i;j++)
        {
            // printf("* ");
            printf("%d ",(i + 1) + (j + 1));
        }
        printf("\n");
    }
}
/* 
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
*/
void printpatterne(int n)
{
    for (int i = 0;i < n; i++)
    {
        for (int j = 0; j <= i;j++)
        {
            // printf("* ");
            // printf("%d ",(i + 1) + (j + 1));
            if (    (((i + 1) + (j + 1)) % 2) == 0)
            {
                printf("1 ");
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void printpatternf(int n)
{
    int p = 0;
    for (int i = 0;i < n; i++)
    {
        for (int j = 0; j <= i;j++)
        {
            printf("%d ", ++p);
            // printf("%d ",(i + 1) + (j + 1));
        }
        printf("\n");
    }
}

void printpatterni(int n)
{
    for (int i = 1;i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i;j++)
        {
            printf("* ");
            // printf("%d ",(i + 1) + (j + 1));
        }
        printf("\n");
    }
}

int main()
{
    printpatterna(5);
    printpatternb(5);
    printpatternc(5);
    printpatternd(5); 
    printpatterne(5);
    printpatternf(5);

    printpatterni(5);
}