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
    ll n,a,b,x=0,y=0;
    cin>>n;
    while(n--)
    {

        ss
        if(a>b)
            x++;
        if(a<b)
            y++;
    }

    if(x>y)
        cout<<"Mishka"<<nn;
    else if(x<y)
        cout<<"Chris"<<nn;
    else
        cout<<"Friendship is magic!^^"<<nn;


    return 0;
}