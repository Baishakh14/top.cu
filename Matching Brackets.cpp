#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main()
{
  stack<char> ab;
  char a[1000];
  cin.getline(a,1000);
  int n = strlen(a);
  int t = 1;
  for(int i = 0;i<n;i++)
  {
    if(a[i] == '(' || a[i] == '{' || a[i] == '[')
    {
        ab.push(a[i]);
    }
    else if(a[i] == ')')
    {
        if(!ab.empty() && ab.top() == '(')
        {
            ab.pop();
        }
        else 
        {
            t = 0;
            break;
        }
    }
        else if(a[i] == '}')
    {
        if(!ab.empty() && ab.top() == '{')
        {
            ab.pop();
        }
        else 
        {
            t = 0;
            break;
        }
    }
        else if(a[i] == ']')
    {
        if(!ab.empty() && ab.top() == '[')
        {
            ab.pop();
        }
        else 
        {
            t = 0;
            break;
        }
    }
  }
  if(ab.empty() && t)
  {
    cout<<"Yes"<<endl;
  }
  else cout<<"No"<<endl;
    return 0;
}
