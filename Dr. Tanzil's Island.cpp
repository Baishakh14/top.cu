#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 double pi = 3.141593;
 int n;
 cin>>n;
 while(n--){
 double r;
 int a;
 cin>>a;
 r = pi*(a*a);
 cout<<fixed<<setprecision(4)<<r<<endl;
 }
    return 0;
}
