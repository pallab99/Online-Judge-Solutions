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
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     loop            for(int i=0;i<n;i++)
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    string s,s1,s2,s3;
    sc>>s>>s1>>s2;
    s3=s+s1;
    sort(s3.begin(),s3.end());
    sort(s2.begin(),s2.end());
    if(s2==s3)
        pf<<"YES"<<nn;
    else
        pf<<"NO"<<nn;
    return 0;
}