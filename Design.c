/*enter the value of n 5
* * * * *
   * * * * 
      * * *
         * *
            *
 */

#include<stdio.h>

int main()
{
    int n=5;
    int count=0;
    int flag=0;
    for(int i=n;i>0;i--)
    {
        if(count>=0)
        {
            flag=flag+2;
            for(int k=1;k<=flag;k++)
            {
                printf("k ");
            }
        }
        count=count+1;
        for(int j=0;j<i;j++)
        {
            count=count+1;
            printf("* ");
        }
        printf("\n");
    }

}