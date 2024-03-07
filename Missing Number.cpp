#include<iostream>
using namespace std;
int main()
{
  int a;
  cin>>a;
  int t = 0;
  int b[3];
  for(int i = 0;i<3;i++)
  {
    cin>>b[i];
    t+=b[i];
  }
  // char str[5][10];
  cout<<a-t<<endl;
  // for(int i = 0;i<5;i++)
  // {
  //   cin>>str[i];
  // }
  // cout<<str[3]<<endl;
  // return 0;
}
