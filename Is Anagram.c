#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int s;
    if(strlen(a)!=strlen(b))
        {
            printf("No\n");
            return 0;
        }
    for(int i = 0;i<strlen(a);i++)
    {
        s = 0;
        for(int j = 0;j<strlen(b);j++)
        {
            if(a[i]==b[j])
            {
                s = 1;
                break;
            }
        }
        if(s==0) break;
    }
    if(s) printf("Yes\n");
    else printf("No\n");

    return 0;
}
