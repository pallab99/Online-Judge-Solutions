#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
typedef vector<ll> v;
#define nn "\n"
#define     pb              push_back
#define     sc              cin
#define     pf              cout
#define     ss(v)           v.size()
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     ios             ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
     int n,c=0,m;
     string s;
     cin>>n>>m;
     while(n--)
     {
             cin>>s;
             set<int>st;
             //sort(s.begin(),s.end());
         for(int i=0;i<s.size();i++)
         {
             if((s[i]-'0')<=m)
                st.insert(s[i]);
         }
         if(st.size()==m+1) c++;
     }
     cout<<c<<endl;
}
int main()
{
   ios;
   solve();
    return 0;
}