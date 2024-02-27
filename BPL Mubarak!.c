#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char a[100];
        scanf("%s",a);
        int l = strlen(a);
        int ball = 0;
        for(int i = 0;i<l;i++)
        {
            if(isalpha(a[i])) a[i] = toupper(a[i]);
            if(a[i]=='N'||a[i]=='W'||a[i]=='D') continue;
            else ball++;
        }
        if(ball==1) printf("%d BALL\n",ball);
        else if(ball>=6&&ball<12)
        {
            printf("%d OVER",ball/6);
            int c = ball%6;
            if(c>1) printf(" %d BALLS\n",c);
            else if(c==0)
            {
                printf("\n");
                continue;
            }
            else printf(" %d BALL\n",c);
        }
        else if(ball>=12)
        {
            printf("%d OVERS",ball/6);
            int c = ball%6;
            if(c>1) printf(" %d BALLS\n",c);
            else if(c==0)
            {
                printf("\n");
                continue;
            }
            else printf(" %d BALL\n",c);
        }
        else if(ball>1&&ball<6) printf("%d BALLS\n",ball);
    }
    return 0;
}
