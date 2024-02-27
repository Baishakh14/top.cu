#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b = a;
    char n[100];
    int c = 0;
    while(a>0)
    {
          n[c] = a%10+'0';
              a/=10;
              c++;
    }
    if(b==0) printf("0");
    else
{
    for(int i = c-1;i>=0;i--)
    {
        printf("%c",n[i]);
        if(i%3==0&&i>0) printf(",");
    }
}
    return 0;
}
