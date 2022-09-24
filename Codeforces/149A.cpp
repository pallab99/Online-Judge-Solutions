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
int k,n,c,mx;
   vector<int>a;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   cin>>k;
   for(int i=0;i<12;i++)
   {
       cin>>n;
       a.push_back(n);
   }
   sort(a.begin(),a.end());
   if(k==0)
   {
       cout<<0<<endl;
       return 0;
   }

   for(int i=11;i>=0;i--)
   {
       mx+=a[i];
       c++;
       if(mx>=k){
         cout<<c<<endl;
       return 0;
       }
   }
   cout<<-1<<endl;
    return 0;
}