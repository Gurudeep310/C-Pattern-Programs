/* Number Pattern - Triangle number pattern - 28
Given an integer N, display the number pattern as described in output. 
Input:
    5
    where:
First line represents the value of N( number of rows ).
Output:
    1
    2 1
    1 2 3
    4 3 2 1
    1 2 3 4 5
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=n;i>0;i--)
    {
        if(i%2!=0)
        {
            count=count+1;
            for(int j=1;j<=count;j++)
            {
                if(j==count)
                    printf("%d",j);
                else
                    printf("%d ",j);
            }
            printf("\n");
        }
        else if(i%2==0)
        {
            count=count+1;
            for(int j=count;j>0;j--)
            {
                if(j==1)
                    printf("%d",j);
                else
                    printf("%d ",j);
            }
            printf("\n");  
        }
    }
}