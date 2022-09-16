#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
using namespace std;
const int Size = 10e9;
const int mx= 1000;
const int mn = -1000;
typedef long long int ll;
typedef unsigned long long int llu;
typedef vector<ll>v;
typedef vector<llu>v1;
typedef map<int,int>mi;
typedef map<string,int>ms;
#define     nn           "\n"
#define     ss           " "
#define     pb           push_back
#define     sc           cin
#define     pf           cout
#define     ss(v)        v.size()
#define     gcd(a,b)     __gcd(a,b)
#define     lcm(a,b)     (a*b)/gcd(a,b)
#define     pi           acos(-1.0)
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int solve()
{
    string s;
    cin>>s;
    if(s.size()%2==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    int x=0,y=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='U')
            x++;
        if(s[i]=='D')
            x--;
        if(s[i]=='L')
            y--;
        if(s[i]=='R')
            y++;
    }
    //cout<<x<<" "<<y;
    int ans=abs(x)+abs(y);
    //cout<<ans;
    cout<<ans/2<<endl;
}
int main()
{
    _0_;
    solve();
    return 0;
}