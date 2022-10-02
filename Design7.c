/*Star pattern - Rhombus star pattern
Given an integer N, display the Rhombus Star pattern as described in output. 
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
    int N;
      scanf("%d",&N);  
    for(int i=N;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
            printf("  ");  
        }  
        for(int k=1;k<=N;k++)  
        {  
            if(k!=N)
            {
          printf("* ");
            }
            else
            {
            printf("*");
            }
        }  
        printf("\n");  
    }  
    
}
