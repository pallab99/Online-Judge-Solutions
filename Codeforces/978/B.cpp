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
    ll t,b=0,c=0;
    string s1;
    cin>>t;
   cin>>s1;
   ll d=s1.size();
   for(int i=0;i<d;i++)
   {
       if(s1[i]=='x')
       {
           b++;
       if(b>=3)
        c++;
       }
        else
        b=0;
   }
    cout<<c<<nn;
    return 0;
}