#include<bits/stdc++.h>
#include<vector>
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
   ll a,b,c,n,t;
   cin>>t;
   while(t--)
   {
       cin>>a>>b>>c>>n;
       ll mx=max(a,max(b,c));
       ll ans=n-((mx-a)+(mx-b)+(mx-c));
       if(ans>=0 && ans%3==0)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<nn;
   }
    return 0;
}