#include<iostream>
#include<set>
using namespace std;
int main()
{
 set<int> ab;
 int a,b;
 cin>>a>>b;
 for(int i = 0;i<a+b;i++){
    int t;
    cin>>t;
    ab.insert(t);
 }
//  for(auto it : ab)
//  {
//      cout<<it;
//  }
   set<int>::iterator abc; // Declare iterator here
   int i = 0;
   abc = ab.begin();
 for (int i = 0; i != ab.size()-1;i++)
 {
     cout<<*abc<<" ";
     abc++;
 }
 cout<<*abc;
 //cout<<"Baishakh"<<endl;
    return 0;
}
