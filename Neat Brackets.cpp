#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
 string a;
 getline(cin,a);
 stack<char> ab;
 int n = a.size();
 for(int i = 0;i<n;i++)
 {
    if(a[i] == '(')
    {
        ab.push(a[i]);
    }
    if(!ab.empty())
    {
        if(a[i] == ')')
        {
            if(ab.top() == '(')
            {
                ab.pop();
            }
        }
    }
    else 
    {
        ab.push(a[i]);
    }
 }
 if(ab.empty()) cout<<"Yes"<<endl;
 else cout<<"No"<<endl;
    return 0;
}
