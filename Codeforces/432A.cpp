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
#define     m               100000
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    ll n,k,c=0,p;
    v vec;
    sc>>n>>k;
    for(int i=0;i<n;i++)
    {
        //c=0;
        cin>>p;
        vec.push_back(p);
        if(5- vec[i]>=k)
            c++;
    }
     pf<<c/3<<nn;
    return 0;
}