#include<stdio.h>

int main()
{
    int n=5;
    int count=0;
    int flag=5;
    for(int i=n;i>0;i--)
    {
        for(int k=1;k<=flag;k++)
        {
            printf("k");
        }
        flag=flag-1;
        count=count+1;
        for(int j=0;j<count;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}