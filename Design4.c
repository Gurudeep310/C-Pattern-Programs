// HOLLOW SQUARE PATTERN
#include<stdio.h>
#include<conio.h>

int main()
{
    int l, w;
    scanf("%d %d",&l,&w);
    for(int i = 0; i<l; i++)
    {
        printf("*");
    }
    printf("\n");
    int count;
    for(int i = 0; i < w-2; i++)
    {
        count = 0;
        for(int j = 0; j<l;j++)
        {
            if(count == 0)
            {
                printf("*");
                count = count + 1;  
            }
            else if(count == l-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
                count = count + 1;
            }
        }
        printf("\n");
    }
    for(int i = 0; i< l; i++)
    {
        printf("*");
    }
}