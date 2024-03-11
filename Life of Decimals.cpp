#include<iostream>
using namespace std;
int main()
{
  char a[] = ".141592653589";   ///value of pi
  int n;
  cin>>n;
  while(n--)
  {
    int ab;
    cin>>ab;
    cout<<a[ab]<<endl;
  }

  return 0;
}
