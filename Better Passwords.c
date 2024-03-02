/*Make the first character an uppercase
Replace all s with $
Replace all i with !
Replace all o with ()
Append a . (period) at the end of the password
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^\n]",a);
    //printf("%d\n",strlen(a));
    for(int i = 0;i<strlen(a);i++)
    {
        if(i==0) a[i]-=32;
        if(a[i]=='s') a[i] = '$';
        if(a[i]=='i') a[i] = '!';
        if(a[i]=='o')
        {
            printf("()");
            continue;
        }
        printf("%c",a[i]);
    }
    printf(".\n");
    return 0;
}

