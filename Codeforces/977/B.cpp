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
    char x,y;
   ll t,i,j,mx=-10;
   string st;

   cin>>t;
   cin>>st;
   for(i=0;i<t;i++)
   {
        int c=0;
       for(j=i;j<t;j++)
       {
           if(st[i]==st[j] && st[i+1]==st[j+1])
            c++;
           if(c>mx)
           {
               mx=c;
               x=st[i];
               y=st[i+1];
           }
       }
   }
   cout<<x<<y<<nn;

    return 0;
}