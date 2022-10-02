// HOLLOW DIAMOND PATTERN
#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int count;
    int flag;
    int flag2;
    int count2 = 0;
    if(n%2 != 0)
    {
        int real = n/2 + 1;
        flag = real-1;
        flag2 = real-1;
        for(int j = 0; j<real; j++)
        {
            for(int i = 0; i<n; i++)
            {
                if(i == flag)
                {
                    printf("*");
                }
                else if( i == flag2 && count2 == 1)
                {
                   printf("*"); 
                }
                else
                {
                    printf(" "); 
                }
            }
            printf("\n");
            count2 = 1;
            flag = flag - 1;
            flag2 = flag2 + 1;
        }
        
        int nom = real;
        int spaces = 1;
        int copy = n - 3;
        for(int i = 0; i < n-real; i++)
        {
            for(int k = 0; k < spaces; k ++)
            {
                printf(" ");
            }
            printf("*");
            for(int j = copy-1 ; j > 0; j--)
            {
                printf(" ");
            }
            if(i<n-real-1)
            {
                printf("*");
            }
            printf("\n");
            spaces = spaces + 1;
            copy = copy -2;
        }
    }
}