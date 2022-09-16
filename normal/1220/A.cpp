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
#define     ios
int main()
{
   ios;
    int n,c=0,d=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)

        {
           if(s[i]=='z')
           {
             c++;
                //cout<<c;
           }

           if(s[i]=='n')
           {
               d++;
            //cout<<d;
           }

        }
        for(int ix=0;ix<d;ix++)
        cout<<1<<" ";
        for(int it=0;it<c;it++)
            cout<<0<<" ";
    return 0;
}