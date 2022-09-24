#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> v;
#define nn "\n"
#define     pb              push_back
#define     s               cin>>a;
#define     ss              cin>>a>>b;
#define     sss             cin>>a>>b>>c;
#define     ssss            cin>>a>>b>>c>>d;
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     loop            for(int i=0;i<n;i++)
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   v vec;
   ll a;
   int i,c=0;
for(int i=0;i<4;i++)
{
    cin>>a;
    vec.pb(a);
}
sort(vec.begin(),vec.end());
for(int i=0;i<3;i++)
{
    if(vec[i]==vec[i+1])
        c++;
}
cout<<c<<nn;
    return 0;
}