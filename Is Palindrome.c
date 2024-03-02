#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char a[100];
  scanf("%[^\n]",a);
    char b[100];
    int j = 0;
    for(int i = strlen(a)-1;i>=0;i--)
    {
        b[j] = a[i];
        j++;
    }
    if(strcmp(a,b)==0) printf("Yes\n");
    else printf("No\n");
    return 0;
}
