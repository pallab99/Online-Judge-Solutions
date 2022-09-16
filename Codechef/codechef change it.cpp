#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
int main()
{
    ll n,a[1000],m=0,sum=0,c=0,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll freq[1000]={0};

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }
    c=0;
    sort(freq,freq+101);
    cout<<n-freq[100]<<endl;
    }
}
