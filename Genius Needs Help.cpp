#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cn = 0;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        int i = a.length()-1;
        int j = b.length()-1;
        int c = 0;   ///cary
        string total;
        while(i>=0 || j>=0 || c)
        {
            int s = c;
            if(i>=0) 
            {
                s+=a[i--]-'0';
            }
            if(j>=0)
            {
               s+=b[j--]-'0';
            }
            c = s/10;
            s%=10;
            //cout<<s<<endl;
            total.push_back(s+'0');
        }
        reverse(total.begin(),total.end());
        cout<<"Case #"<<++cn<<": "<<total<<endl;
    }

    return 0;
}
