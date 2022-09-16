#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
void solve()
{
     int t;
     cin>>t;
     map<string,int> a;
     string s;
    for(int i=0;i<t;i++)
     {
         cin>>s;
         a[s]++;
         if(a[s]==1)
            cout<<"OK"<<endl;
         else
            cout<<s<<a[s]-1<<endl;
     }
}
int main()
{
    solve();
    return 0;
}