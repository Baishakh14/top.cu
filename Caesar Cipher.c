#include<stdio.h>
#include<string.h>
int main()
{
int n;
scanf("%d",&n);
char a[101];
scanf(" %[^\n]",a);
for(int i = 0;i<strlen(a);i++)
{
    if(a[i]==' ')
    {
        printf("%c",a[i]);
        continue;
    }
    int x = a[i]-'a';
    //printf("%d\n",x);
    x-=n;
    //printf("%d\n",x);
    if(x<0) x+=26;
    //printf("%d\n",x);
    printf("%c",x+97);
}
printf("\n");
    return 0;
}
