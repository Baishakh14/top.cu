#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool t = true;
    int n;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    for(int i = 1;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<a[i-1]) t = false;
    }
    if(t) printf("Yes\n");
    else printf("No\n");
    return 0;
}
