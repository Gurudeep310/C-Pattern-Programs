/*Number Pattern - Square number pattern - 12
Given two integers N1 and N2, display the given number pattern as described in output.
Input:
    5
    5
    where:
First line represents the value of N1( number of rows ).
Second line represents the value of N2( number of columns ).
Output:

    1 2 3 4 5

    2 3 4 5 6

    3 4 5 6 7

    4 5 6 7 8

    5 6 7 8 9
*/

#include<stdio.h>
int main()
{
    int n1,i,j,k,n2;
    int count=1;
    scanf("%d",&n1);
    scanf("%d",&n2);
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(j==(n2-1))
            {
                printf("%d",count);
                count=count+1;
            }
            else
            {
                printf("%d ",count);
                count=count+1;
            }
            //printf("%d ",count);
        }
        count=count-(n2-1);
            
        printf("\n");
    }
    return 0;
}