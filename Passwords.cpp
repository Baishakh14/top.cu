#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
string a;
while(cin>>a){
//cout<<a<<endl;
int l = 0;
int u = 0;
int d = 0;
int len = a.length();
int c = 0;
for(int i = 0;i<len;i++)
{
  if(isalpha(a[i]))
  {
    if(isupper(a[i])) u = 1;
    if(islower(a[i])) l = 1;
  }
  if(isdigit(a[i])) d = 1;
  if(l==1&&u==1&&d==1) 
  {
    c++;
    u = l = d = 0;
  }
}
cout<<c<<endl;
}
  return 0;
}
