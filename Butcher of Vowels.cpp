#include<iostream>
#include<cstring>
#define y cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
using namespace std;
int main()
{
   int n;
   cin>>n;
   while(n--)
   {
    bool b = false;
      char a[100];
      cin>>a;
      int l = strlen(a);
      for(int i = 0;i<l;i++)
      {
        if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='i'||a[i]=='u')
        {
          b = true;
        } 
      }
      if(b)
      {
        y;
      }
      else 
      {
        no;
      }
   }

  return 0;
}
