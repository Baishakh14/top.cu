#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s,c = 0;
    while(a>0&&b>0)
    {
        s = a%10+b%10;
        a/=10;
        b/=10;
        if(s>9) ///     s>9 then it has carry
        {
            c = 1;
            break;
        }
    }
    if(c) printf("yes\n");
    else printf("no\n");
    return 0;
}
