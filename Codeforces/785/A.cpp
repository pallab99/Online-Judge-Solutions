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
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    ll a,sum=0;
    string s1;
    s
    while(a--)
    {
        cin>>s1;
        if(s1=="Tetrahedron")
            sum+=4;
        else if(s1=="Cube")
        sum+=6;
        else if(s1=="Octahedron")
            sum+=8;
        else if(s1=="Dodecahedron")
            sum+=12;
        else
            sum+=20;
    }
     cout<<sum<<nn;

    return 0;
}