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
///substring
void subString(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {
            string sub=s.substr(i, len);
        }
    }
}
void solve()
{
    string s;
    int n,cnt=0;
    cin>>s>>n;
    set<char> c;
    for(int i=0; i<s.size(); i++)
    {
        c.insert(s[i]);
    }
    if(s.size()<n)
        cout<<"impossible"<<endl;
    else if(n>=c.size())
        cout<<n-c.size()<<nn;
    else if(n<c.size())
        cout<<0<<nn;
}
int main()
{
    _0_;
    solve();
    return 0;
}