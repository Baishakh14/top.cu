#include<iostream>
using namespace std;
bool isprime(int a)
{
   for(int i = 2;i<a;i++)
   {
      if(a%i==0) return false;
   }
   return true;
}
int main()
{
  int a;
  cin>>a;
  if(isprime(a)) cout<<"NO PUNISHMENT"<<endl;
  else 
  {
   for(int i = 0;i<a;i++)
   cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
  }
   return 0;
}
