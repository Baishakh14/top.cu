#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    int b = (int)a/10;
    printf("[");
    for(int i = 0;i<10;i++)
    {
        if(i<b) printf("+");
        else printf(".");
    }
    printf("] %d%%\n",(int)a);

    return 0;
}
