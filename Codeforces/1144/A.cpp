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
#define     loop            for(int i=0;i<n;i++)
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
   cin>>t;
   while(t--)
   {
       int flag=0;
       string s;
       cin>>s;
       int l=s.size();
       sort(s.begin(),s.end());
       for(int i=0;i<l-1;i++)
       {
           if(s[i+1]-s[i]!=1)
           {
               flag=1;
               break;
           }
       }
       if(flag==1) cout<<"No"<<endl;
       else   cout<<"Yes"<<endl;
   }
    return 0;
}