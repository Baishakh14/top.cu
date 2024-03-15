#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        cout<<"Case "<<++i<<": "<<(a*a)+(b*b)<<endl;
    }

    return 0;
}
