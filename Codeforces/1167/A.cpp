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

    ll t,n,pos;
    string st;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>st;
        ll d=st.size();
        for(int i=0; i<d; i++)
        {
            pos=n;
            if(st[i]=='8')
            {
                pos=i;
                break;
            }
        }

        if(abs(pos-n)>=11)
            cout<<"YES"<<nn;
        else
            cout<<"NO"<<nn;
    }

    return 0;
}