/*Number Pattern - Triangle number pattern - 2
Given an integer N, display the number pattern as described in output. 
Input:
    5
    where:
First line represents the value of N( number of rows ).
Output:   
    5 5 5 5 5

    4 4 4 4

    3 3 3

    2 2

    1
*/
//NOT WORKING IN CODE ZINGER BUT PROGRAM WORKING HERE
#include<stdio.h>
int main()
{
    int n=3,i,j,k,l,m;
    //scanf("%d",n);
    int count=n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j==(j-1))
                printf("%d",count);
            else
                printf("%d ",count);
        }
        printf("\n");
        count=count-1;
    }
}