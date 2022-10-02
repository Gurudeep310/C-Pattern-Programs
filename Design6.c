/*Star pattern - Square Star pattern
Given an integer N, display the Square Star pattern as described in output. 
Input:
    5
    where:
First line represents the value of N( number of rows ).
Output:
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/

#include<stdio.h>
int main()
{
    int n1,i,j,k;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(j==(n1-1))
                printf("*");
            else
                printf("* ");
        }
            
        printf("\n");
    }
    return 0;
}

