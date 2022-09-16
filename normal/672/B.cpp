#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
using namespace std;

#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n,m,t,x,y,z,sum=0;
string s,s1,s2;
set<char>c;
void solve()
{
     int n;
     cin>>n;
     cin>>s;
     if(n>26)
        cout<<-1<<endl;
     else
     {
         for(int i=0;i<n;i++)
     {
         c.insert(s[i]);
     }
     cout<<n-c.size()<<endl;
     }

}
int main()
{
    _0_;
    solve();
    return 0;
}