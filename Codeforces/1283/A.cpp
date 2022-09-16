#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
typedef vector<int> vi;
#define pb push_back
int main()
{

    ll t,h,m,sum=0;
    cin>>t;
    while(t--)
{
    cin>>h>>m;
    ll x=60*h;
    ll sum=x+m;
    cout<<1440-sum<<nn;
}




    return 0;
}