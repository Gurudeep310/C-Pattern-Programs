/*Number Pattern - Triangle number pattern - 16
Given an integer N, display the even number pattern as described in output. 
Input:
    5
    where:
First line represents the value of N( number of rows ).
Output:
    2 4 6 8 10
    4 6 8 10
    6 8 10
    8 10
    10
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    int flag=0;
    for(int i=n;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            count=count+2;
            if(j==i-1)
            {
                printf("%d",count);
            }
            else
            {
                printf("%d ",count);
            }
        }
        printf("\n");
        flag=flag+2;
        count=flag;
    }
}