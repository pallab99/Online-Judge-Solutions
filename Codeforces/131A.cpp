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
    string st,st1,st2;
    cin>>st;
    int d=st.size();
    bool flag=true;
    for(int i=1; i<d; i++)
    {
        if(st[i]>='a' && st[i]<='z')
            flag=false;
    }
    if(flag)
    {
        for(int i=0; i<d; i++)
        {
            if(st[i]>='a' && st[i]<='z')
                st[i]-=32;
            else
                st[i]+=32;
        }
    }
    cout<<st<<nn;
    return 0;
}