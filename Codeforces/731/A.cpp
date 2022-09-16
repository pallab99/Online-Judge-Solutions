#include<bits/stdc++.h>
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
#define     loop            for(int i=0;i<n;i++)
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int a=0,b=0;
    string s;
     cin>>s;
    char ch='a';
    for(int i=0;i<s.size();i++)
    {
        a=abs(ch-s[i]);
        b+=min(26-a,a);
        ch=s[i];
    }
    cout<<b<<endl;
    return 0;
}