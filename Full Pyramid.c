/*
   *      3 space after
  * *    2  no space after last *;
 * * *   1
* * * *
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        for(int j = i;j<n;j++)
        {
            printf(" ");  ///print spaces before *
        }
        for(int k = 1;k<=i;k++)
        {
            if(k==i) printf("*");
            else
            printf("* ");
        }
        ///printf("baihsakh"); i checked the is the last * does not contain any 0;
        printf("\n");
    }


    return 0;
}
