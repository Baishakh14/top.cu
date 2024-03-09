#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   double av;
   int t = 0;
   for(int i = 1;i<=n;i++)
   {
      cin>>a[i];
      t+=a[i];
      av = (float)t/i;
      cout<<av<<endl;
   }
   return 0;
}
