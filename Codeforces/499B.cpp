#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
using namespace std;
void solve()
{
    string s,s1,s2;
    int n,m,t,x,y,z,sum=0;
    map<string,string> mp;
     cin>>n>>m;
     while(m--)
     {
         cin>>s>>s1;
         if(s.size()>s1.size())
            mp[s]=s1;
         else mp[s]=s;
     }
     while(n--)
     {
         cin>>s2;
         cout<<mp[s2]<<" ";
     }
}
int main()
{
    solve();
    return 0;
}