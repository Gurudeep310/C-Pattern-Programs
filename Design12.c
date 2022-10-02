/*Star pattern - Mirrored Right triangle star pattern
Given an integer N, display the mirrored right triangle star pattern as described in output. 
Input:
    5
    where:
First line represents the value of N( number of rows ).
Output:
             *
           * *
         * * *
       * * * *
     * * * * *  
*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    int flag=n;
    for(int i=n;i>0;i--)
    {
        for(int k=2;k<=flag;k++)
        {
            printf("  ");
        }
        flag=flag-1;
        count=count+1;
        for(int j=0;j<count;j++)
        {
            if(j==count-1)
            {
                printf("*");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}