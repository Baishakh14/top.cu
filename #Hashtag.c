#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^\n]",a);
    for(int i = 0;a[i]!='\0';i++)
    {
        if(a[i]!=' ') printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}
