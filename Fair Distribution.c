#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int x = b;
  b/=a;
  b+=1;
  b*=a;
//  a = b-x;
x = b-x;
  printf("%d",x);

    return 0;
}
