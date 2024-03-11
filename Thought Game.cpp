#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 while(n--)
 {
 int a,b;
 cin>>a>>b;
a+=b;
a/=2;
if(a&1) cout<<"Oops!"<<endl;
else cout<<"Sadia will be happy."<<endl;
 }
  return 0;
}
